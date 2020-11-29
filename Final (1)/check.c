#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 




int main() 
{   int error = 0, pos = 0, line = 1; 
    // opening both file in read only mode 
    FILE *fp1 = fopen("test1.txt", "r"); 
    FILE *fp2 = fopen("untitled.txt", "r"); 
  
    if (fp1 == NULL || fp2 == NULL) 
    { 
       printf("Error : Files not open"); 
       exit(0); 
    } 
  
    char ch1 = getc(fp1); 
    char ch2 = getc(fp2); 

    

    while (ch1 != EOF && ch2 != EOF) 
    { 
        pos++; 
        if (ch1 == '\n' && ch2 == '\n') 
        { 
            line++; 
            pos = 0; 
        } 

        if (ch1 != ch2) 
        { 
            error++; 
            printf("Line Number : %d \tError"
               " Position : %d \n", line, pos); 
        } 

        ch1 = getc(fp1); 
        ch2 = getc(fp2); 
    } 
  
    printf("Total Errors : %d\t", error); 
  
    // closing both file 
    fclose(fp1); 
    fclose(fp2); 
    return 0; 
} 