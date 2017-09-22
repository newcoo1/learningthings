#include <stdio.h>
#include "../includes/utils.h"

int p3n(long n){
    printf("\n***%d\n",n);
    return 0;
}
int p6n(long n){
    printf("\n%******d\n",n);
    return 0;
}

int p3c(int c){
    printf("\n***%c\n",c);
    return 0;
}
int p6c(int c){
    printf("\n******%c\n",c);
    return 0;
}

int parrayi(int a[],int length){
    int i=0;
    for(i=0;i<length;++i){
	printf("\n%d*%d\n",i,a[i]);
    }
    return 0;
}

int getline2(char line[],int lim){
    int i=0;
    int c=0;
    while(  ( (c=getchar())!=EOF ) && (i<lim-1) &&(c!='\n') ){
	line[i++]=c;
    }
    if( lequal(c,'\n') ){
	line[i]=c;
	++i;
    }
    line[i]='\0';
    return i;
}

int copys(char to[],char from[]){
   int i=0;
   while( (to[i]=from[i])!='\0' ){
	++i;
    }
    return 0;
}

int lequal(long a,long b){
    return a==b;
}
int lnequal(long a,long b){
    return !( lequal(a,b) );
}

int reverse_str(char s[]){
    int i;
    for (i=0;lnequal(s[i],'\0');++i){;}
    int length=i;
    int tem;
    int start=0;
    int end=length-1;
    for(;start<end;++start,--end){
	tem=s[start];
	s[start]=s[end];
	s[end]=tem;
    }
    return 0;
}

int cofs(char *s,char c){
    int i;
    for(i=0; (s[i]!='\0')&&(s[i]!=c) ;++i){
	;}
    if(s[i]=='\0'){return -1;}
    else {return i;}
}

int lower(char uc){
    uc=( (uc>='A') &&(uc<='Z') ) ?  ('a' + uc-'A') :  uc;
    return uc;
}
//getch
//->char
//return char from buff or getchar()
#include <stdio.h>
#define BUFF_SIZE 100

int buff[BUFF_SIZE];
int buffp=0;
int getch(){
    return (buffp>0) ? buff[--buffp] : getchar();
}

//ungech
//char ->void
//push a char to buff
void ungetch(int c){
    if(buffp<BUFF_SIZE){
	buff[buffp++]=c;
    }else{
	printf("ungetch : too many char\n");	}
    return ;
}
