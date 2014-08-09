#include <stdio.h>

char add[]=
	"\x55"
	"\x89\xe5"
	"\x8b\x45\x0c"
	"\x8b\x55\x08"
	"\x01\xd0"
	"\x5d"
	"\xc3";
int main()
{
	printf("1+2=%d\n",((int(*)(int,int))add)(1,2));
	return 0;
} 
