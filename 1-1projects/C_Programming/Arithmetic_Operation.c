#include <stdio.h>

int main(void)
{
	double a;
	double b;

	printf("a와 b를 입력하시오: ");
	scanf("%lf %lf", &a, &b);

	printf("a+b=%f\n", a+b);
	printf("a-b=%f\n", a-b);
	printf("a*b=%f\n", a*b);
	printf("a/b=%f\n", a/b);

	return 0;	
}