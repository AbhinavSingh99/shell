#include <stdio.h>
#include<string.h>
#include<stdlib.h>
 
int f_compare(char* argk[], int argc){
	int errors = 0 ;
	int error_position = 0 ;
	int line = 1 ;
	if (argc < 3){
		printf ("not proper inputs \n");
	}
	else {

		char *file1 = argk[1];
		char *file2 = argk[2];
		FILE *test_from = fopen(file1, "r");
		FILE *test = fopen(file2, "r");

		if (test==NULL && test_from==NULL){
			printf ("files not opening \n ");
		}
		else {
				char line1 = getc (test_from);
				char  line = getc (test);
				while (line != EOF && line1 != EOF){
						error_position= error_position+1 ;

					if (line == '\n' && line1 == '\n'){
						line = line +1 ;
						error_position = 0 ;
					}
					if (line1 != line){
						
						errors = errors+1 ;
						printf ("line is :%d", line);
						printf ("    ");
						printf ("error position  :%d\n", error_position);
					}
					line1 = getc (test_from);
					line = getc (test);
				}
				printf("total errors :%d\n",errors );
		}
		fclose (test_from);
		fclose (test);
		return (0);
	}

}