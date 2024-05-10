#include<stdio.h>
int main()
{
	int number, result =1;
	printf("\nEnter your number = ");
	scanf("%d",&number);
	for(int i =1; i<=number; i++)
	{
		result *= i;
	}
	printf("%d Factorial is = %d", number, result);
	return 0;
}

