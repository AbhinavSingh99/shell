#include <stdio.h>
#include<string.h>


int f_echo(char* argv[],int argc){
	int flag = 0 ;
	int file = 0 ;
	for (int i=1; i<argc; i++){
		if (argv[i]==">"){
			flag =1 ;
			file =i+1 ; 
			break ;
		}
	}
	
	if (argc == 1){
		printf("invalid string");
		return(0);
	}
	else{
		for (int i=1; i<argc; i++){
			printf("%s",argv[i] );
			printf(" ");

		}
		printf ("\n");

		return (0);
	}
}