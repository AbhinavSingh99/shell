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
int f_pwd(char* argv[]){
					char dir[1001] ;																//get current working directory 
					getcwd (dir,1000);																//print the directory
					printf ("%s\n", dir);
					return(0);
}