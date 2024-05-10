#include<stdio.h>
int main()
{
	int marks[5];
	int sum;
	float average;
	printf("\nEnter marks for 5 subject : ");
	for(int i=0; i<5; i++)
	{
		printf("\nSubject %d = ",i+1);
		scanf("%d",&marks[i]);
	}
	for(int i=0; i<5; i++)
	{
		
		sum += marks[i];
	}
	average = (float) sum/5;
	printf("Average = %.2f",average);
	if(average>80)
	{
		printf("\nExcellent");
	}
	else if(average>60)
	{
		printf("\nGood");
	}
	else if(average>50)
	{
		printf("\nFair");
	}
	else
	{
		printf("\nFail");
	}
	
	return 0;
}
