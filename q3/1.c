//main file
#include<stdio.h>
#include<stdlib.h>
void name(void) ;		//contained in file1
void age(void) ;		//contained in file2 
void result(void) ;		//contained in file3

int main()
{
	printf("main fun file 1 s\n ") ;
	name();
	age();
	result();
return 0 ;
}
