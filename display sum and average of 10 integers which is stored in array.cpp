#include<stdio.h>
int main()
{
	int marks[] = {51,62,73,84,95,76,67,58,69,70};
	int sum=0;
	float average;
	for(int i=0;i<10; i++)
	{
		sum += marks[i];
	}
	average = (float)sum/10;
	printf("\nSum of marks is = %d\nAverage of marks is = %.2f",sum,average);

	
	return 0;
}
