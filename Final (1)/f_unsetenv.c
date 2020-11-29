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

int f_unsetenv(char *args[], int n_args)
{
    if(n_args != 2)
        printf("Incorrect number of arguments. Provide only 1 argument.\nSyntax: `unsetenv var`\n");

    else if (unsetenv(args[1]) < 0)
        perror("Error");

    return(1);
}