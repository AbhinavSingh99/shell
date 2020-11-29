#include<stdio.h>
#include<string.h>



int f_info (char* args[], int no_args){
	int Noofcommands= 25;
		char* commands[Noofcommands];
		commands[0]= "exit";
		commands[1]= "cd";
		commands[2]= "ps";
		commands[3]= "ls";
		commands[4]= "pwd";
		commands[5]= "clear";
		commands[6]= "info";
		commands[7]= "cp";
		commands[8]="mkdir";
		commands[9]="cat";
		commands[10]="mv";
		commands[11]="grep";
		commands[12]="chmod";
		commands[13]="rm";
		commands[14]="echo";
		commands[15]= "color";
		commands[16]= "date";
		commands[17]= "reminder";
		commands[18]= "compare";
		commands[19]= "system";
		commands[20]= "setenv";
		commands[21]= "unsetenv";
		commands[22]= "printenv";
	if(no_args == 1){
		printf(" the list of funtion we execute are :\n");
		printf("1:  cd \n");
		printf("2:  ps \n");
		printf("3:  ls \n");
		printf("4:  pwd \n");
		printf("5:  cp \n");
		printf("6:  mkdir \n");
		printf("7:  cat \n");
		printf("8:  mv \n");
		printf("9:  grep \n");
		printf("10:  chmod \n");
		printf("11:  rm \n");
		printf("12:  echo \n");
		printf("13:  color \n");
		printf("14:  date \n");
		printf("15:  reminder \n");
		printf("16:  compare \n");
		printf("17:  system\n");
		printf("18:  setenv \n");
		printf("19:  unsetenv \n");
		printf("20:  printenv \n");
		printf("21:  info \n");
		printf("22:  clear \n");
		printf("23:  exit \n");
		printf("we have also executed piping and environmental variables\n");
	}
	if (no_args ==2){
		if (strcmp(args[1],commands[0])==0){
			printf ("exit is used to exit out of the shell\n");
			printf("using syntax: exit ");
		}
		if (strcmp(args[1],commands[1])==0){
			printf ("Change the shell working directory.\nChange the current directory to DIR.  The default DIR is the value of the\nHOME shell variable.\n");
			printf("using syntax: cd  \n");
			printf("using syntax: cd .. \n");
			printf("using syntax: cd ... \n");
			printf("using syntax: cd *directory* \n");

		}
		if (strcmp(args[1],commands[2])==0){
			printf ("displays information about a selection of the active processes.\n");
			printf("using syntax: ps ");
		}

		if (strcmp(args[1],commands[3])==0){
			printf ("List information about the FILEs (the current directory by default).\n");
			printf("using syntax: ls \n");
			printf("using syntax: ls \n");
		}
		if (strcmp(args[1],commands[4])==0){
			printf ("prints current working directory.\n");
			printf("using syntax: pwd \n");
		}
		if (strcmp(args[1],commands[5])==0){
			printf ("clears the shell screen\n");
			printf("using syntax: clear\n ");
		}
		if (strcmp(args[1],commands[6])==0){
			printf ("information about the shell\n");
			printf("using syntax: info \n");
			printf("using syntax: info *function* \n");
		}
		if (strcmp(args[1],commands[7])==0){
			printf ("Copy SOURCE to DEST\n");
			printf("using syntax: cp *directory/FILENANE* *directory* \n");
		}
		if (strcmp(args[1],commands[8])==0){
			printf ("reate the DIRECTORY(ies), if they do not already exist.\n");
			printf("using syntax: mkdir *directory* ");
		}
		
		if (strcmp(args[1],commands[9])==0){
			printf ("Concatenate FILE(s) to standard output.\n");
			printf("using syntax: cat *directory/FILENANE* \n");
		}
		if (strcmp(args[1],commands[10])==0){
			printf ("Rename SOURCE to DEST, or move SOURCE(s) to DIRECTORY\n");
			printf("using syntax: mv *FILENANE* *directory* \n");
		}
		if (strcmp(args[1],commands[11])==0){
			printf (" searches the named input FILEs (or standard input if no files are named, or if a single hyphen-minus (-) is given as file name) for lines containing a match to the given PATTERN.\n");
			printf("using syntax: grep *FILENANE* *FILENAME* \n");
		}
		if (strcmp(args[1],commands[12])==0){
			printf ("  chmod changes the file mode bits of each given file according to mode,.\n");
			printf("using syntax: chmod *FILENANE* \n");
		}
		if (strcmp(args[1],commands[13])==0){
			printf ("rm removes each specified file..\n");
			printf("using syntax: rm *FILENANE* \n");
		}
		if (strcmp(args[1],commands[14])==0){
			printf ("echo prints the line / words in the shell.\n");
			printf("using syntax: echo *line/words* \n");
		}
		if (strcmp(args[1],commands[15])==0){
			printf ("color changes the color of output\n");
			printf("using syntax: color *colorname* \n");
		}
		if (strcmp(args[1],commands[16])==0){
			printf ("date displays date and time\n");
			printf("using syntax: date \n");
		}
		if (strcmp(args[1],commands[17])==0){
			printf ("reminder sets reminder of *input* seconds \n");
			printf("using syntax: reminder *time(sec)* *reminder name* \n");
		}
		if (strcmp(args[1],commands[18])==0){
			printf ("compare compares two files data and gives you the errors as result\n");
			printf("using syntax: compare *file1* *file2*\n");
		}
		if (strcmp(args[1],commands[19])==0){
			printf ("system helps implement system shell commnads \n");
			printf("using syntax: system *command/commands* \n");
		}
		if (strcmp(args[1],commands[20])==0){
			printf ("setenv heps to set a environmental variable\n");
			printf("using syntax: setenv *variable name* *variable value* \n");
		}
		if (strcmp(args[1],commands[21])==0){
			printf ("setenv heps to set a environmental variable\n");
			printf("using syntax: unsetenv *variable name* \n");
		}
		if (strcmp(args[1],commands[22])==0){
			printf ("printenv heps to set a environmental variable\n");
			printf("using syntax: printenv *variable name* \n");
		}

	}
	else {
		printf("write info for more info");
	}
}