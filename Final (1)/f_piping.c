#include <unistd.h>
#include <stdio.h>
#include <string.h>

struct command
{
  const char *argv[100];
};

 int forking (int input, int output, struct command *cmd) {
	pid_t pid ;

	if ((pid=fork())==0){
			if (input != 0){
				dup2 (input, 0);
				close(input);
			}
			if (output != 1){
				dup2(output,1);
				close(output);
			}
			return execvp(cmd->argv [0], (char * const *)cmd->argv)	;
		}
		return(pid);
}

int piping (int n, struct command *cmd){
	int k ;
	pid_t pid ;
	int input, output [2];

	input = 0;
	for ( k = 0; k < (n-1); k++){
		pipe(output);

		forking(input, output [1], cmd+k);
	
		close (output[1]);

		input = output[0];
	}
	if (input != 0){
		dup2(input,0);
	
	}

	return execvp(cmd [k].argv [0], (char * const *)cmd [k].argv);
}

int f_piping (char* argk[], int argc)
{	
	int token =0 ;
	
	for (int i=0;i<argc;i++){
		if (strcmp(argk[i],"|")==0){
			token = token+1 ;
		}
	}
	//printf("%d\n",token );
	int func = token+1 ;
	struct command cmd[func];
	int p = 0;
	int q = 0;
	//printf ("%d\n",func);
	for (int i =0 ;i<argc;i++){
		if (strcmp(argk[i],"|")!=0){
			//printf ("%d\n",func);
			cmd[p].argv[q]= argk[i];
			q = q+1 ;
			
		}
		else {
			//printf("%d\n",q );
			cmd[p].argv[q]= 0;
			//printf ("%s\n", cmd[p].argv[q]);
			p = p+1 ;
			q = 0 ;
		}
	}
	cmd[p].argv[q]= 0;
	//printf ("%d\n",func);
	return piping(func, cmd);
	//printf ("%s\n", cmd[1][0]);
	
	
}

