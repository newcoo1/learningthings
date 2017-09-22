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
int main(void){
    ungetch('a');
    int c=getch();
    int d=getch();
    printf("%c %c",c,d);
    printf("\n");
    return 0;
}
