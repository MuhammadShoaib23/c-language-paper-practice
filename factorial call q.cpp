#include<stdio.h>
int factorial(int number)
{
	int result = 1;
	for(int i=1; i<=number; i++)
	{
		result *= i;
	}
	printf("\n%d factorial is %d = ", number,result);
}
int main()
{
	int number;
	printf("Enter your number to find it Factorial = ");
	scanf("%d\n",&number);
	
	factorial(number);
	return 0;
}
