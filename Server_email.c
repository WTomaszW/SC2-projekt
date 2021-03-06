#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <netdb.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <pthread.h>
#include <stdbool.h>


#define QUEUE_SIZE 5

#define MULTITHREAD



char logins [100][50];
char passwords [100][50];
int logged [100] = {0};
int users = 1;
int numberMessages = 0;
int receivers[100];
int messagesSender[100];
char messages[100][3000];
char messagesTitle[100][50];




int Registered(char login [50]){

    for (int i = 0; i<=users; i++){

        if(strcmp(logins[i],login) == 0){
            return i;
        }
    }
    return -1;
}



void *ThreadBehavior(void *arg)
{
    pthread_detach(pthread_self());


    int sockid = *(int *) arg;
	


	char buff[50];
    bool notLogged = true;

    int k = 0;

    while(notLogged){

    bzero(buff, 50);

	read(sockid, buff, sizeof(buff));

   	char * token = strtok(buff, "-");

    char option [2];
    char login [50];
    char password [50];

    
  	for(int i = 0; i < 3 ; i++) {

        if(i == 0){ strcpy(option, token);}
		if(i == 1){ strcpy(login, token);}
        if(i == 2){ strcpy(password, token);}

      	token = strtok(NULL, "-");

		}


    //Rejestrowanie
    if (strcmp(option, "2") == 0){

        k = Registered(login);

        if(k == -1){

        strcpy(logins [users], login);
        strcpy(passwords [users], password);

        bzero(buff, 50);

        strcpy(buff, "Registration completed successfully!" );
        
        write(sockid, buff, sizeof(buff));

        printf("Zarejestrowano pomyślnie  \n");

        users = users + 1;

        }
        else{


        bzero(buff, 50);

        strcpy(buff, "User is already registered!" );
        
        write(sockid, buff, sizeof(buff));

        printf("Już zarejestrwowany  \n");

        }

    }

    //Logowanie
    else{
     
        k = Registered(login);

        if(k == -1){

            bzero(buff, 50);
            strcpy(buff, "There is no user!" );
            write(sockid, buff, sizeof(buff));
            printf("Nie ma takiego użytkownika \n");

        }
        else if(logged[k] == 1){

            bzero(buff, 50);
            strcpy(buff, "User is already logged!" );
            write(sockid, buff, sizeof(buff));
            printf("Już zalogowany \n");

        }
        else if(strcmp(passwords[k] , password)==0){

            notLogged = false;
            logged[k] = 1;
            
            bzero(buff, 50);
            strcpy(buff, "Logged correctly!" );
            write(sockid, buff, sizeof(buff));

            printf("Zalogowano pomyślnie ! \n");

        }

    }

    }

    bool end = true;
    char temp [1000];

    while(end){

        bzero(temp, 1000);
        read(sockid, temp ,sizeof(temp));
        //printf("temp: %s \n",temp);
        
        if (strncmp("exit", temp, 4) == 0) { 
        	printf("Client Exit...\n");
            logged[k] = 0;
            bzero(buff, 50);
            strcpy(buff, "Done");
            write(sockid, buff, sizeof(buff));
            	
                pthread_exit(NULL);
                end = false;

        } else if (strncmp("msg_send",temp, 8) == 0){
        
        char * tok = strtok(temp, "-");
        char type [50];
        char receiver [50];
        char title [50];
        char text [3000];


        for(int i = 0; i < 4 ; i++) {

        	if(i == 0){ strcpy(type, tok);}
	        if(i == 1){ strcpy(receiver, tok);}
        	if(i == 2){ strcpy(title, tok);}
        	if(i == 3){ strcpy(text, tok);}

    		tok = strtok(NULL, "-");
    	}

        int receiver_index = Registered(receiver);
		
            if(receiver_index !=-1){

                receivers[numberMessages] = receiver_index;
                strcpy(messages[numberMessages], text);
                strcpy(messagesTitle[numberMessages], title);
                messagesSender[numberMessages] = k;
                numberMessages = numberMessages + 1;

            }
            else{

                receivers[numberMessages] = k;
                strcpy(messages[numberMessages], "Failed to send");
                strcpy(messagesTitle[numberMessages], "Failed to send");
                messagesSender[numberMessages] = k;
                numberMessages = numberMessages + 1;


            }
        }

        else if (strncmp("msg_read",temp, 8) == 0)
        {
            int any = 0;
            char buffMsg[3100];
            for(int i = 0; i<100; i++){

                if(k == receivers[i]){
                    any = 1;
                    bzero(buffMsg, 3100);
                    strcpy(buffMsg,"Read");
                    strcat(buffMsg,"-");
                    strcat(buffMsg, messagesTitle[i]);
                    strcat(buffMsg,"-");
                    strcat(buffMsg,messages[i]);
                    strcat(buffMsg,"-");
                    strcat(buffMsg, logins[messagesSender[i]]);
                    write(sockid, buffMsg, sizeof(buff));
                    read(sockid, buffMsg, sizeof(buff));

                }

            } 

            if(any == 0){
                bzero(buffMsg, 3100);
                strcpy(buffMsg,"Read");
                write(sockid, buffMsg, sizeof(buff));
            }      
        }


    		
    }
    return NULL;

}


void handleConnection(int* connection_socket_descriptor) {


    printf("Connected !!! \n");
    int create_result = 0;

    #ifdef MULTITHREAD
    pthread_t thread1;

    create_result = pthread_create(&thread1, NULL, ThreadBehavior, (void *) connection_socket_descriptor);
 
    if (create_result){
       printf("Błąd przy próbie utworzenia wątku, kod błędu: %d\n", create_result);
       exit(-1);
    }
    
    #endif

}

int main(int argc, char* argv[])
{


   int server_socket_descriptor;
   int *connection_socket_descriptor = malloc(sizeof(int));
   int bind_result;
   int listen_result;
   char reuse_addr_val = 1;
   struct sockaddr_in server_address;
   int port = atoi(argv[2]);

   //inicjalizacja gniazda serwera
   
   memset(&server_address, 0, sizeof(struct sockaddr));
   server_address.sin_family = AF_INET;
   server_address.sin_addr.s_addr = inet_addr(argv[1]);
   server_address.sin_port = htons((unsigned short)port);

   server_socket_descriptor = socket(AF_INET, SOCK_STREAM, 0);
   if (server_socket_descriptor < 0)
   {
       fprintf(stderr, "%s: Błąd przy próbie utworzenia gniazda..\n", argv[0]);
       exit(1);
   }
   
   setsockopt(server_socket_descriptor, SOL_SOCKET, SO_REUSEADDR, (char*)&reuse_addr_val, sizeof(reuse_addr_val));



   bind_result = bind(server_socket_descriptor, (struct sockaddr*)&server_address, sizeof(struct sockaddr));
   if (bind_result < 0)
   {
       fprintf(stderr, "%s: Błąd przy próbie dowiązania adresu IP i numeru portu do gniazda.\n", argv[0]);
       exit(1);
   }



   listen_result = listen(server_socket_descriptor, QUEUE_SIZE);
   if (listen_result < 0) {
       fprintf(stderr, "%s: Błąd przy próbie ustawienia wielkości kolejki.\n", argv[0]);
       exit(1);
   }

   while(1)
   {
     
    *connection_socket_descriptor = accept(server_socket_descriptor, NULL, NULL);
       if (&connection_socket_descriptor < 0)
       {
           fprintf(stderr, "%s: Błąd przy próbie utworzenia gniazda dla połączenia.\n", argv[0]);
           exit(1);
       }
    handleConnection(connection_socket_descriptor);



   }

   close(server_socket_descriptor);
   return(0);
}
