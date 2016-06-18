#include<stdio.h>
//아스키코드
int main()
{
	char ch='0';
	char finished = '\0';

	while(1)
	{
		scanf("%c", &ch);
		if(ch = '\n')
			return -1;
		scanf("%c",&finished);
		if(finished != '\n')
			return -1;
		

		if(ch<91 && ch>64)
		{
			printf("%c\n", ch+32);
			
		}
		else if(ch>90 && ch<123)
		{
			printf("%c\n", ch-32);
			
		}
		else if(ch>47 && ch<58)
		{
			printf("%c\n", ch);
			
		}
		else
			break;
		
	}
	
	
	return 0;
}