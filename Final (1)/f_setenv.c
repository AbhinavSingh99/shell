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

int f_setenv(char* args[], int n){
    char value[1000] ;
    if (n> 3){
        strcpy (value, args[2]);
        //printf("%s\n",value );
        for (int i = 3;i<n; i++){
        strcat (value," ");
        strcat (value,args[i]);
        
        }
    }

    if(n == 2) 
    {
        if(setenv(args[1], "\0", 2) < 0)
            perror("Error");
    }

    else if(setenv(args[1], value , 2) < 0)
        perror("Error");
}