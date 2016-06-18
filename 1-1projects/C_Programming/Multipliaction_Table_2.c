#include <stdio.h>

int mul(int a)
{
	int k;
	int result;
	scanf("%d", &a);
	for(; k < 10; k++)
		{
			printf("%d * %d = %d\n", a, k, a*k);
			result = k * a;
	}
	return result;
}

int main(void)
{	
	int n1;
	int n2;
	int i;
	int j;
	scanf("%d", &n1);
	scanf("%d", &n2);

	if(n1<=n2)
	{
		for(; n1<=n2; n1++)
		{
			for(i = 1; i<10; i++)
				printf("%d * %d = %d\n", n1,i, n1*i);
		}
	}
	else if(n1>=n2)
	{
		for(; n2<=n1; n2++)
		{
			for(j = 1; j<10; j++)
				printf("%d * %d = %d\n", n2,j, n2*j);
		}
	}
	return 0;
}
