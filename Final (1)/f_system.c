#include<stdlib.h>
#include<string.h>


int f_system(char* args[], int n_args){
  	char value[1000] ;
    if (n_args> 2){
        strcpy (value, args[1]);
        //printf("%s\n",value );
        for (int i = 2;i<n_args; i++){
        strcat (value," ");
        strcat (value,args[i]);
        
        }
        printf("%s\n",value);
    }	
	else {
		system(args[1]);

	}
}