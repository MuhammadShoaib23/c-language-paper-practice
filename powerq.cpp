#include<stdio.h>
int main()
{
	int base, exponent, result = 1;
	printf("\nEnter Value for Base = ");
	scanf("%d",&base);
	printf("\nEnter Value for Exponent = ");
	scanf("%d",&exponent);
	for(int i=1; i<=exponent; i++)
	{
		result *= base;
	}
	printf("\n%d to the power %d = %d", base, exponent, result);
	return 0;
}
