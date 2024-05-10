#include<stdio.h>
int main()
{
	int marks[10] = {41,52,63,73,85,96,77,68,59,50};
	int sum = 0;
	float average;
	for(int i=0; i<10; i++)
	{
		sum += marks[i];
	}
	average = (float) sum/10;
	printf("Sum = %d\nAverage = %.2f",sum, average);
	return 0;
}
