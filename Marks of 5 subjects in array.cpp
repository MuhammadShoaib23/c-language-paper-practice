#include<stdio.h>
int main()
{
	int marks[5];
	int sum=0;
	float average;
	
	printf("\nEnter marks of 5 subjects to find average of it :");
	for(int i=0; i<5; i++)
	{
		printf("\nMarks of Subject %d : ",i+1);
		scanf("%d",&marks[i]);
	}
	for(int i=0; i<5; i++)
	{
		sum +=marks[i];
	}
	printf("\nsum of marks is = %d",sum);
	average = (float)sum/5;
	printf("\nAverage of marks is = %.2f",average);
	if(average>80)
	{
		printf("\n\tExcellent");
	}
	else if(average>60)
	{
		printf("\n\tGood");
	}
	else if(average>50)
	{
		printf("\n\tFair");
	}
	else
	{
		printf("\n\tFail");
	}
	
	return 0;
}
