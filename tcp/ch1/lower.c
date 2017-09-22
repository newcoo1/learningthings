#include <stdio.h>

//char uc -> char lc
//produce lower of uc
int lower(char uc);

int main(int argc,char *args[]){
    printf("%i\n",lower('A') == 'a');
    printf("%i\n",lower('B') == 'b');
    printf("%i\n",lower('c') == 'c');
    printf("%i\n",lower('Z') == 'z');
    return 0;
}

int lower(char uc){
    uc=( (uc>='A') &&(uc<='Z') ) ?  ('a' + uc-'A') :  uc;
    return uc;
}
