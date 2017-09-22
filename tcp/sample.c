#include <stdio.h>
#include "includes/utils.h"

#define LOWER	0
#define UPPER	300
#define STEP	20
#define IN 1
#define OUT 0
#define SIZE 10
#define MAXLINE 1000

//char*,char*->int
//produce the number that the first location in first str where any character from the 2nd str occurs,or -1 if 1st str contains no characters from 2nd str
int any(char *s1,char *s2);
int main(){
    int i;
    for(i=0;i<100;++i){
	if( 0 ){
	    break;
	}
	p3n(i);
    }
}
int oldmain(int argc,char *args[]){
    if(  lequal( any("chuyalong","haon"),1 )  ){
	printf("passed");
    }else{
	printf("test1 faild\n");
    }
    if(  lequal( any("cyll","xc"),0 )  ){
	printf("passed");
    }else{
	printf("test2 faild\n");
    }
    any(args[1],args[2]);
    p3n( any(args[1],args[2]) );
    return 0;
}

int any(char *s1,char *s2){
    return 0;
}
