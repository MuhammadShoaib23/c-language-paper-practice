#include<stdio.h>
int main()
{
	int base,exponent,result=1;
	printf("\nEnter Number for Base = ");
	scanf("%d",&base);
	printf("\nEnter Number for Exponent = ");
	scanf("%d",&exponent);
	
	for(int i=1; i<=exponent; i++)
	{
		result *=base;
		
	}
	printf("%d to the power %d is = %d",base,exponent,result);
	
	return 0;
}
