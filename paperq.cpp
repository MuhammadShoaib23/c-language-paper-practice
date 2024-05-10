#include<stdio.h>
#include"prime.h"
int main()
{
	int number;
	
	printf("Enter a number b/w 2 to 200 = ");
	scanf("%d",&number);
	
	if(number>=2 && number<200)
	{
		int result = isprime(number);
		if(result==1)
		{
			printf("The given number %d is prime",number);
		}
		else
		{
			printf("The given number %d is not a prime",number);
		}
	}
	else
	{
		printf("Your number is invalid for this program");
	}
	return 0;
}
