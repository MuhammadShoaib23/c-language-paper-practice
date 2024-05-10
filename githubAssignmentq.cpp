#include<stdio.h>
int isprime(int number)
{
	if(number<2 && number>200)
	return 0;
	for(int i=2; i*i<=number; i++)
	{
		if(number%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	
	int number,tryAgain=1;
	while(tryAgain==1)
	{
		printf("\nEnter your number to show it prime or not = ");
		scanf("%d",&number);
		if(number>=2 && number<=200)
		{
			int result;
			result = isprime(number);
			if(result==1)
			{
				printf("\n%d is a prime number.",number);
			}
			else
			{
				printf("\n%d is not a prime number.",number);
			}
			tryAgain=0;
		}
		else
		{
			printf("\nInvalid input plz try again Press 1 = ");
			scanf("%d",&tryAgain);
		}
	}
	return 0;
}
