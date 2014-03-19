#include <stdio.h>

int main(int argv,char* argc[])
{
	char x,y;
	x=*argc[1];
	y=*argc[2];
	printf("%c %c\n",x,y);
	return 0;

}
