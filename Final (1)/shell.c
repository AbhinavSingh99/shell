#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <time.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <dirent.h>
#include <errno.h>
#include<ftw.h>
#include <sys/stat.h>
#include "headers.h"


void *gettinginput(){
	    FILE* inputmode = stdin ;
	    char *string;
	    size_t startsize = 1 ;
	    int modifiedlength;
	    size_t length = 0;

	    string = realloc(NULL, sizeof(char)*startsize); // start size is minimum size decided by user
	    												// we  allocate certain memory to the input 
	    if(!string){												
	        return string;
	    }
	    while(EOF!=(modifiedlength=fgetc(inputmode)) && modifiedlength != '\n'){			//to give extra memory to the 

	        string[length++]=modifiedlength;
	        //printf ("%d\n",modifiedlength);
	        if(length==startsize){
	            string = realloc(string, sizeof(char)*(startsize+=1)); //incresing size
	            //printf ("%zu\n", startsize);
	            if(!string){
	                return string;
	            }
	        }
	    }
	    string[length++]='\0';
	  

	   return realloc(string, sizeof(char)*length);
	}
//function to execute the commands(coded)

int execute (char* binput[],char*commands[],int noofentries){

			if(strcmp(binput[0],commands[0])==0){
					printf ("\n\nThank you\n\n");
					exit(0);
			}
			else if(strcmp(binput[0],commands[1])==0){
					f_cd(binput);
			}
			else if(strcmp(binput[0],commands[2])==0){
					f_ps(binput);
			}
			else if(strcmp(binput[0],commands[3])==0){
					f_ls1(noofentries,binput);
			}
			else if(strcmp(binput[0],commands[4])==0){
					f_pwd(binput);
			}
			else if(strcmp(binput[0],commands[5])==0){
					system("clear");
			}
			else if(strcmp(binput[0],commands[6])==0){
					f_info(binput, noofentries);
			}
			else if(strcmp(binput[0],commands[7])==0){
					f_cp(noofentries,binput);
			}
			else if(strcmp(binput[0],commands[8])==0){
					f_mkdir(noofentries,binput);
			}
			else if(strcmp(binput[0],commands[9])==0){
					f_cat(binput);
			}
			else if(strcmp(binput[0],commands[10])==0){
					f_mv(noofentries,binput);
			}
			else if(strcmp(binput[0],commands[11])==0){
					f_grep(noofentries,binput);
			}
			else if(strcmp(binput[0],commands[12])==0){
					f_chmod(noofentries,binput);
			}
			else if(strcmp(binput[0],commands[13])==0){
					f_rm(noofentries,binput);
			}
			else if(strcmp(binput[0],commands[14])==0){
					f_echo(binput,noofentries);
			}
			else if(strcmp(binput[0],commands[15])==0){
					f_color(binput,noofentries);
			}
			else if(strcmp(binput[0],commands[16])==0){
					f_dateandtime(binput,noofentries);
			}
			else if(strcmp(binput[0],commands[17])==0){
					f_remind(binput,noofentries);
			}
			else if(strcmp(binput[0],commands[18])==0){
					f_compare(binput,noofentries);
			}
			else if(strcmp(binput[0],commands[19])==0){
					f_system(binput,noofentries);
			}
			else if(strcmp(binput[0],commands[20])==0){
					f_setenv(binput,noofentries);
			}
			else if(strcmp(binput[0],commands[21])==0){
					f_unsetenv(binput,noofentries);
			}
			else if(strcmp(binput[0],commands[22])==0){
					f_printenv(binput,noofentries);
			}
			else {
				f_output(binput);
			}
			return(1);
	}


int main () {
	system ("clear");
	//int k ;
	while (1){
		
		// printing directory and host
		char name[1024];
		char dir [1001];
		name [1023] = '\0';
		gethostname (name , 1024);
		getcwd (dir , 1000);
		printf ("%s" ,name);
		printf ("%s" ,dir);

		//printing prompt 
		printf ("$$>");

		//getting input from the user>>>
		
		void* input ;
		void* save ;
		input = gettinginput();
		save = input ;

		//breaking input command >>>
		char *broken = strtok (input , " ");
		int i =0 ;
		char *binput[101];

		while (broken != NULL){
			binput[i++]= broken ;
			broken = strtok (NULL, " ");

		}

		int noofentries = i ;														//the number of commands 
		//printf("%d\n", noofentries);
		//printf("%s\n",binput[1] );
		//printf("%s\n",binput[2] );


		// custom commands >>>>>
		int Noofcommands= 25;
		char* commands[Noofcommands];
		commands[0]= "exit";
		commands[1]= "cd";
		commands[2]= "ps";
		commands[3]= "ls";
		commands[4]= "pwd";
		commands[5]= "clear";
		commands[6]= "info";
		commands[7]= "cp";
		commands[8]="mkdir";
		commands[9]="cat";
		commands[10]="mv";
		commands[11]="grep";
		commands[12]="chmod";
		commands[13]="rm";
		commands[14]="echo";
		commands[15]= "color";
		commands[16]= "date";
		commands[17]= "reminder";
		commands[18]= "compare";
		commands[19]= "system";
		commands[20]= "setenv";
		commands[21]= "unsetenv";
		commands[22]= "printenv";

		//char* background[1];
		//background[0]= "&";
		//if (strcmp(binput[noofentries-1], background[0])==0){					// if the input has & at the end 
			//printf ("background process\n");
			//int noofinputs = noofentries;
			//char *command= binput[0];								//the actual process that need to be executed in background
			//printf("%s\n",command);
			//char *args[noofinputs-2];								//the arguments that the background process needs
			//for (int i=0;i<noofinputs-1;i++){
			//	args[i]= binput[i];								//the arguments
				//printf("%s\n", args[i]);
				//printf("%s\n",binput[i] );

			//}
			 //args[noofinputs-1]= NULL ;

			//int pid = fork();										//forking the process 
			//if (pid<0){												// if pid is negative ie it does not exsist or is an error
			//	printf("its not working");
			//}
			//if(pid){
				
			//		execvp(args[0],args);							//runs the command in background 
			//		return 1 ;
			//}

		//}
		//else{
		if (f_checkpiping(binput,noofentries)==1){
			f_piping (binput,noofentries);
			return(1);
		}
		else{
		execute (binput,commands,noofentries);
		//binput[0]=NULL ;
		
		}

//}
}
}
