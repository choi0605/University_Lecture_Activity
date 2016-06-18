#include <stdio.h>

double main()
{
	int use;
	int tax;
	int fee;
	scanf("%d", &use);
	if(use<=100 && use>=1)
		tax = 370+use*52;
	else if(use<=200 && use>100)
		tax = 660+(use-100)*88.5+5200;
	else if(use<=300 && use>200)
		tax = 1130+(use-200)*127.8+8850+5200;
	else if(use<=400 && use>300)
		tax = 2710+(use-300)*184.3+12780+8850+5200;
	else if(use<=500 && use>400)
		tax = 5130+(use-400)*274.3+18430+12780+8850+5200;
	else
		tax = 9330+(use-500)*494+27430+18430+12780+8850+5200;
	
	fee = tax*0.09;
	printf("이번달 전기요금은 %d원 입니다.\n", tax+fee);
	return 0;
	
}