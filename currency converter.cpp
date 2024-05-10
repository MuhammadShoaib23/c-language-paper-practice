#include<stdio.h>
int main()
{
	int choice;
	float amount, result;
	printf("\nEnter the amount for Convertion = ");
	scanf("%f", &amount);
	printf("Choose Convertion method :\nDollor to Rupees press : 1\nRupees to Dollar press : 2");
	printf("\nConvertion method to be followed = ");
	scanf("%d",&choice);
	if(choice == 1)
	{
		result = amount*300;
		printf("Your Amount is now in Rupees = %.2f", result);
	}
	else if(choice == 2)
	{
		result = amount/300;
		printf("Your Amount is now in Dollar = %.2f", result);
	}
	else
	{
		printf("Invalid input for Convertion Method!");
	}
	
	return 0;
}
