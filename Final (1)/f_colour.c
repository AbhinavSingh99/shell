#include <stdio.h>
#include<string.h>

int f_color(char* color[], int argc)
	{
	if (strcmp(color[1],"red")==0) {
	printf("\033[0;31m"); 
	printf("The color is changed to red\n");
	}
	if (strcmp(color[1],"green")==0) {
	printf("\033[0;32m"); 
	printf("The color is changed to green\n");
	}
	if (strcmp(color[1],"yellow")==0) {
	printf("\033[0;33m"); 
	printf("The color is changed to yellow\n");
	}
	if (strcmp(color[1],"blue")==0) {
	printf("\033[0;34m");
	printf("The color is changed to blue\n");
	}
	if (strcmp(color[1],"magenta")==0) {
	printf("\033[0;35m");
	printf("The color is changed to magenta\n");
	}
	if (strcmp(color[1],"cyan")==0) {
	printf("\033[0;36m"); 
	printf("The color is changed to cyan\n");
	}
	if (strcmp(color[1],"reset")==0) {
	printf("\033[0m");
	printf("The color is back to original\n");
	}

}