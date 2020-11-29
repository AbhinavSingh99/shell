
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>


int f_ls1( int noofentries,char* binput[]){
						
						if (noofentries == 1){											//if there is only one entry is "ls"

					    DIR *dir;
					    struct dirent *directory;														
					    char path[1000];
					    getcwd(path , 1000);										//get current working directory 
					    printf ("%s\n",path);										//open directory 
					    dir = opendir(path);
					    char actual_path[1000];
					    if (dir)
					    {
					        while ((directory = readdir(dir)) != NULL)				//print the files
					        {
					            													//Condition to check regular file.
					            if(directory->d_type==DT_REG){
					                actual_path[0]='\0';							//checks if path is not null /empty
					                strcat(actual_path,directory->d_name);			//copies name of the directory's file to actual path
					                printf("%s\n",actual_path);
					            }
					             if(directory->d_type==DT_DIR){
								    actual_path[0]= '\0';
								    strcat(actual_path,directory->d_name);
								    printf("%s\n",actual_path);

								 }
					        }
					        closedir(dir);											//closing the directory
					    } }

					    else if(strcmp(binput[1],"-l")==0){
					    	DIR *dir1;
						    struct dirent *myfile;
						    struct stat mystat;

						    dir1 = opendir(binput[2]);
						    while((myfile = readdir(dir1)) != NULL)
						    {
						        stat(myfile->d_name, &mystat);    
						        printf("%ld",mystat.st_size);
						        printf(" %s\n", myfile->d_name);
						    }
						    closedir(dir1);
					    }
					    
					    else{																//if there are more than one entry ie ls and directory/ies
					    	for (int j=0; j<(noofentries-1); j++){								//the loop works for the no of directories in input
					    		DIR *dir ;
					    		struct dirent *directory ;										//open the directories
					    		char *path = binput[j+1];
					    		printf ("%s\n", path);
					    		printf("%d\n",j );
					    		dir = opendir(path);
					    		char actual_path[1000] ;
					    		printf("%s\n",path );
					    		if (dir)
								    {
								        while ((directory = readdir(dir)) != NULL)					//print the files
								        {
								            //Condition to check regular file.
								            if(directory->d_type==DT_REG){							//regular files
								                actual_path[0]= '\0';
								                strcat(actual_path,directory->d_name);
								                printf("%s\n",actual_path);

								            }
								            if(directory->d_type==DT_DIR){							//directories //folders
								                actual_path[0]= '\0';
								                strcat(actual_path,directory->d_name);
								                printf("%s\n",actual_path);

								            }
								        }
								        printf ("-------------------------//////////////////---------------------\n");
								        closedir(dir);
								  		  } 


					    	}
					    }
					}


					