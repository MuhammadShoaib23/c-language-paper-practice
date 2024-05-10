#ifndef PRIME_H
#define PRIME_H
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
#endif
/*
==>goto program files.
==>goto dev cpp.
==>got MinGW.
==> goto include save file in include named as prime.h.
*/
#include<stdio.h>
#include"prime.h"
int main()
{
	int number;
	printf("\nEnter your number to show it is prime or not = ");
	scanf("%d",&number);
	if(number>=2 && number<=200)
	{
		int result;
		result = isprime(number);
		if(result==1)
		{
			printf("\n%d is a prime number.", number);
		}
		else
		{
			printf("\n%d is not a prime number.", number);
		}
	}
	else
	{
		printf("\nInvalid input!");
	}
	return 0;
}
