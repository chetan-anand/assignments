#include<iostream>

using namespace std ;

void name(void) ;		//contained in file1
void age(void) ;		//contained in file2 
void result(void) ;		//contained in file3

int main()
{
	cout << " file : 1.cpp \n"  ;
	name();
	age();
	result();
return 0 ;
}
