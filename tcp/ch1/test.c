#include "includes/utils.h"
#include "stdio.h"

int main(){
    int i=1;
    int h=3;
    i=(i>h) ? i : h;
    printf("%i \n",i);
    return 0;
}
