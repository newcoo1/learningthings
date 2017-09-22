
#include <stdio.h>
//alloc()
//integer -> *char
//allocat storage given and return pointer to it
#define ALLOCSIZE 1024

static char allocbuff[ALLOCSIZE];
static char *allocp=allocbuff;
char *alloc(int n){
   if(allocbuff+ALLOCSIZE - allocp>=n){
	allocp+=n;
	return allocp-n;
    }else{
	return 0;
    }
    return 0;
}
void afree(char *p){
    if(p>=allocbuff && p<(allocbuff+ALLOCSIZE) ){
    p=allocbuff;
    }
}
char *talloc(){
    char *s="cyl";
    char *p=alloc(4);
    int i;
    for(i=0;i<4;i++){
	*(p+i)=s[i];
    }
    *(s+1)='m';
    return s;
}

int main(){
    printf("%s \n",talloc());
  return 0; 
}

