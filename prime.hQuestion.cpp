#include<stdio.h>
/*
#ifndef PRIME_H
#define PRIME_H
int isprime(int number)
{
	if(number<2 && number>200)
	return 0;
	for(int i=1; i*i<=number; i++)
	{
		if(number%i==0)
		return 0;
	}
	return 1;
}
#endif
==> go to program files 
==> go to devc++
==> go to MINGW64 or 32
==> go to include and save in include named as "prime.h"
It will make your own header file*/
#include"prime.h"
int main()
{
	int number;
	printf("\nEnter your number = ");
	scanf("%d",&number);
	if(number>=2 && number<=200)
	{
		int result;
		result = isprime(number);
		if(result==1)
		{
			printf("\n%d is a prime number",number);
		}
		else
		{
			printf("\n%d is not a prime number",number);
		}
	}
	else
	{
		printf("\nYour number in invalid");
	}
	return 0;
}
