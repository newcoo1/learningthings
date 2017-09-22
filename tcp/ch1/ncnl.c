#include <stdio.h>

#define LOWER	0
#define UPPER	300
#define STEP	20

int main(){
    int c;
    long nc=0;
    long nl=0;
    for(nc=0; (c=getchar())!=EOF;++nc ){
	if (c=='\n'){
	--nc;
	++nl;
    }
    }
    printf("\n%ld \n%ld \n",nc,nl);
    return 0;
}
