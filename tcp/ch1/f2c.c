#include <stdio.h>

/* printf Faharenheit=Celseius table
 * for fahr=0, 20, ...,300;floating point version
 */

int main(){
    int lower,uper,step;
    lower=0;
    uper=300;
    step=20;
    float fahr,cel;
    fahr=lower;
    printf("fahr    cel\n");
    while(fahr <= uper){
	cel=(5.0/9.0 * (fahr-32));
	printf("%3.0f%10.2f\n",fahr,cel);
	fahr+=step;
    }
    
    return 0;
}
