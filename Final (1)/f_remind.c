#include <stdio.h>
#include <time.h>

int f_remind (char* argv[], int argc){
	int remind_time = atoi(argv[1]);
	int pid = fork() ;
	if (pid < 0){
		printf("sorry, your reminder connot be placed");
	}
	else if(pid == 0){
		sleep(remind_time);
		printf("your reminder: %s\n",argv[2] );
	}
	else{
		return(0);
	}
}