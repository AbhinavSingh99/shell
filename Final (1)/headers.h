#include "f_mkdir.c"
#include "f_cat.c"
#include "f_cd.c"
#include "f_ps.c"
#include "f_echo.c"
#include "f_mv.c"
#include "f_ls1.c"
#include "f_grep.c"
#include "f_chmod.c"
#include "f_cp.c"
#include "f_rm.c"
#include "f_pwd.c"
#include "f_colour.c"
#include "f_dateandtime.c"
#include "f_remind.c"
#include "f_checkpiping.c"
#include "f_piping.c"
#include "f_compare.c"
#include"f_setenv.c"
#include"f_unsetenv.c"
#include"f_printenv.c"
#include "f_system.c"
#include"f_output.c"
#include"f_info.c"
//#include "compile.c"


int f_mkdir(int noofinputs,char *binput[]);
int f_cat(char *binput[]);
int f_pwd(char *binput[]);
int f_cd(char *binput[]);
int f_mv(int noofinputs,char *binput[]);
int f_ls1(int noofinputs,char *binput[]);
int f_chmod(int noofinputs,char *binput[]);
int f_cp(int noofinputs,char *binput[]);
int f_grep(int noofinputs,char *binput[]);
int f_rm(int noofinputs,char *binput[]);
int compile(char *binput[]);
int f_info(char *binput[],int noofinputs);
int f_clear(char *binput[]);
int f_ps(char *binput[]);
int f_echo(char *binput[],int noofinputs);
int f_color(char *binput[],int noofinputs);
int f_dateandtime(char *binput[],int noofinputs);
int f_remind(char *binput[],int noofinputs);
int f_checkpiping(char *binput[],int noofinputs);
int f_piping(char *binput[],int noofinputs);
int f_compare(char *binput[],int noofinputs);
int f_system(char *binput[],int noofinputs);
int f_setenv(char *binput[],int noofinputs);
int f_unsetenv(char *binput[],int noofinputs);
int f_printenv(char *binput[],int noofinputs);
int f_output(char *binput[]);