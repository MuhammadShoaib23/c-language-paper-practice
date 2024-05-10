#include<stdio.h>
int main()
{
	int amount,choice;
	float result;
	printf("\nEnter your Amount for Conversion = ");
	scanf("%d",&amount);
	
	printf("\nChoose Conversion method :\nDollar to Rupees Press 1 :\nRupees to Dollar press 2 : ");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		result = (float)amount*300;
		printf("\nNow your amount is in Rupees = %.2fPKR",result);
	}
	
	else if(choice==2)
	{
		result = (float)amount/300;
		printf("\nNow your amount is in Dollars = %.2f$",result);
	}
	
	else
	{
		printf("\nInvalid input for method of conversion");
	}	
	return 0;
}

