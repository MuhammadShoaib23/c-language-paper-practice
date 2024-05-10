#include<stdio.h>
int main()
{
	int fact=1,n;
	printf("\nEnter your number = ");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
		fact *= i;
	}
	printf("\n%d Factorial is = %d",n,fact);
	
	return 0;
}
