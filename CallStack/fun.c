#include <stdio.h>

/*
 * What's the function of the array ?
 */

const char arr[]=
	"\x55"
	"\x89\xe5"
	"\x8b\x45\x0c"
	"\x8b\x55\x08"
	"\x8d\x04\x02"
	"\x5d"
	"\xc3";

int main()
{
	int a,b;
	printf("Input one numbers?%n\n",&a);
	scanf("%d",&b);
	printf("%d\n",((int(*)(int,int))arr)(a,b));
	return 0;
} 
