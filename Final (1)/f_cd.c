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

int f_cd(char* binput[]){
							char name[10001];
							char* new = binput[1];					// takes the input directory 
							printf("%s\n", new);
							int final;
							char k[1]= "/";
							getcwd (name ,10000);					//gets current working directory
							//printf ("%s\n", name);
							//gets(new);
							strcat(name , k);						//adds "/" to the directory
							strcat (name , new);					// add the input 
							
							for (int i=0 ; i<sizeof (name); i++){		// removes extra spaces from the last
								if (name[i]!= '\0'){
									i=i+1 ;
								}
								else {
									final = i ;
								}
							}
							char finalname[final+1];
							for (int i=0 ; i< final+1 ; i++){
								finalname[i]= name[i];
							}
							//printf ("%s\n", name );
							chdir (new );							//change directory

							
							//getcwd (name ,10000);
							//printf ("%s\n",name);
							//return(0);
						}