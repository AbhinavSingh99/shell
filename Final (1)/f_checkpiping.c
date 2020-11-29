#include <unistd.h>
#include <stdio.h>
#include <string.h>

int f_checkpiping(char* argk[], int argc){
	int token_value = 0 ;
	for (int i=0;i<argc;i++){
		if (strcmp(argk[i],"|")==0){
			token_value = 1 ;
			break ;
		}
	}
	return(token_value);
}