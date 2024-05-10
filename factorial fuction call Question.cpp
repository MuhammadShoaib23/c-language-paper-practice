#include<stdio.h>
int factorial(int number)
{
	int result = 1;
	for(int i=1; i<=number; i++)
	{
		result *= i;
	}
	printf("\n%d Factorial is = %d",number,result);
	return 0;
}
int main()
{
	int number;
	printf("\nEnter your number to find its Factorial = ");
	scanf("%d",&number);
	factorial(number);
	
	
	return 0;
}
