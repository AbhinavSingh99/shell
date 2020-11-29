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

int f_printenv(char *args[], int no_args){
	//printf("i am in print env");
	const char* s = getenv(args[1]);
    printf("%s:", args[1]);
    printf("%s\n",(s!=NULL)? s : "getenv returned NULL");
    
    return(0);
}