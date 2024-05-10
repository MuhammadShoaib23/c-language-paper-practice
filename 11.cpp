#include<stdio.h>
int prime(int n)
{
	if(n<2 && n>100)
	return 0;
	for(int i=2; i*i<=n; i++)
	{
		if(n%i==0)
		
			return 0;
		
	}
		return 1;
}
int main()
{
	int n,tryAgain=1;
	
	while(tryAgain==1)
	{
		printf("Enter your number between 2 to 100 =");
		scanf("%d",&n);
		if(n>=2 && n<=100)
		{
			int result = prime(n);
			if(result==1)
			{
				printf("%d is a prime number ",n);
			}
			else
			{
				printf("%d is not a prime number ",n);
			}
			tryAgain = 0;
		}
		else
		{
			printf("Your number is out of range press one to tryAgain = ");
			scanf("%d",&tryAgain);
		}
	}
	
	return 0;
}
