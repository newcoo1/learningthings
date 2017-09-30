#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
	char *s="129";
	int is=atoi(s);
	usleep(1000000);
	printf("wake up!%d",is);
	return 0;
}
	
