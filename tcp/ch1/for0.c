#include <stdio.h>

#define LOWER	0
#define UPPER	300
#define STEP	20

int main(){
    for(int fahr = UPPER;fahr >= LOWER;fahr-=STEP){
	printf("%3d%6.1f \n",fahr,((fahr-32) * (5.0/9.0)));
    }
    return 0;
}
