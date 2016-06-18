#include<stdio.h>
int main(void)
{
	int size = 1;
	int i;
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);

	for(i=9; i>0; i--)
			printf("%d*%d=%d \n", i, num, i*num);
}
