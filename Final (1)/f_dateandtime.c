#include <stdio.h>
#include <sys/time.h>
#include <time.h>

int f_dateandtime(char *argv[],int argc) {
	time_t t ;
	time(&t);

	printf ("the date and time is %s",ctime(&t));
	
}