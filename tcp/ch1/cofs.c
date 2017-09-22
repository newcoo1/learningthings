#include <stdio.h>

//char *s,char c ->int
//produce the 1st location in str s where char c occurs,return -1 if s contains no c
int cofs(char *s,char c);

int main(int argc,char *args[]){
    printf("%i \n",(cofs("chuyal",'h')==1) );
    printf("%i \n",(cofs("chuyal",'a')==4) );
    printf("%i \n",(cofs("chuyal",'x')==-1) );
    printf("%i \n",(cofs("chuyal",'l')==5) );
    return 0;
}

int cofs(char *s,char c){
    int i;
    for(i=0; (s[i]!='\0')&&(s[i]!=c) ;++i){
	;}
    if(s[i]=='\0'){return -1;}
    else {return i;}
}
