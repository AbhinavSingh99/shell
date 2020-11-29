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
int f_ps(char* argv[]){
					clock_t timetaken ;							
					timetaken = clock () ;									//approximate clock time used by the process

					printf ("PID 	TTY 		TIME 	CMD \n");
					char *tty=ttyname (STDIN_FILENO);
					//printf ("%s\n", tty);

					int pid= getpid ();											//get pid of the prcess
					//printf ("%d\n", pid);

					timetaken = clock() - timetaken ;
					double time_taken = ((double)timetaken)/CLOCKS_PER_SEC ;	//use he formula to get time taken
					//printf ("%f\n", time_taken);
					printf ("%d", pid );										//prints pid,tty,time_taken,cmd
					printf ("	");
					printf ("%s", tty);
					printf ("	");
					printf ("%f", time_taken);
					int ppid = getppid();								
					if (ppid == 0){
						printf ("-bash");
					}
					else {
							printf ("-bash\n");
							clock_t timetaken ;
							timetaken = clock () ;
							printf ("%d",ppid);
							char *tty=ttyname (STDIN_FILENO);
							printf ("	");
							printf ("%s", tty);
							timetaken = clock() - timetaken ;
							double time_taken = ((double)timetaken)/CLOCKS_PER_SEC ;
							printf ("	");
							printf ("%f", time_taken);
							printf ("shell\n");

					}
					return(0);
				}