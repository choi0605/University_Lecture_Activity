#include<stdio.h>

int bit(int a, int b)
{
	int c;

	c= ~1 * a * (2<<b) / 4;

	return c;
}

int main()
{
	int a;
	int b;
	scanf("%d %d", &a, &b);

	printf("-1 * %d * 2^%d = %d\n", a, b, bit(a, b));

	return 0;
}