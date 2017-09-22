#include <stdio.h>

#define LOWER	0
#define UPPER	300
#define STEP	20
#define IN 1
#define OUT 0

int main(){
    int c;
    int state;
    long nc=0;
    long nl=0;
    long nb=0;
    long nt=0;
    long nw=0;
    for(nc=0; (c=getchar())!=EOF;++nc ){
	if (c=='\n'){
	state=OUT;
	--nc;
	++nl;
	putchar('\n');
	}else
	if(c==' '){
	    state=OUT;
	    --nc;
	    ++nb;
	    putchar('\n');
	}else
	if(c=='\t'){
	    state=OUT;
	    --nc;
	    ++nt;
	    putchar('\n');
	}else{
	    putchar(c);
	    if(state==OUT){
		state=IN;
		++nw;
	    }
	}
    }
    printf("\nnc nl nb nt nw: %ld %ld %ld %ld %ld ",nc,nl,nb,nt,nw);
    return 0;
}
