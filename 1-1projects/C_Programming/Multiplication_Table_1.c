#include<stdio.h>

int main()
{
	int num1=2;
	int num2=10;
	int i;
	
	for(i=1; i<11; i++)
		printf("%-4d%-4d%6d\n", i, num1*i, num2*i);

	return 0;
}