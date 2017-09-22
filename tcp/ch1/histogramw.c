#include <stdio.h>
#include "includes/utils.h"

#define LOWER	0
#define UPPER	300
#define STEP	20
#define IN 1
#define OUT 0
#define SIZE 10

int main(){
    int l[SIZE];
    int c=0;
    for(int i=0;i<SIZE;++i){
	l[i]=0;
    }
    int state=OUT;
    int lc=0;
    while( (c=getchar()) !=EOF){
	if( (c==' ') || (c=='\n') ){
	    state=OUT;
	}else{
	    state=IN;
	} 
	if(state==IN){
	   ++lc;
	}else {
	    l[lc]++;
	    lc=0;
	}
    }
    //for(int i=0;i<SIZE;++i){printf("%i char: %i \n",i,l[i]);}
    parrayi(l,SIZE);
    return 0;
}
