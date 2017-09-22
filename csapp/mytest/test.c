#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(){
  printf("sizeof int:%d\n",sizeof(int) );
  int x=-1;
  int n=2;
  x=x>>n;
  x=x&(~((~(0))<<(32-n)));
  printf("x :%d %x ",x,x);
  return 0;
}
int main1(){
    int *array4;
    array4=(int *) malloc(sizeof(int) *4);
    int i;
    for (i=0;i<4;++i){
	array4[i]=i;
    }
    assert(array4[2]==1);
    free(array4);
}
