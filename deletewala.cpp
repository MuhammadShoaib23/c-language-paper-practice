#include<stdio.h>
void mychar(char letter)
{
	

	if(letter >='A' && letter <='Z')
	{
		letter += 32;
		printf("your Character is now in lowercase = %c",letter);
	}
	else if(letter>='a' && letter <= 'z')
	{
		letter -= 32;
		printf("your Character is now in uppercase = %c",letter);
	}
	else
	{
		printf("Invalid input");
	}
}
int main()
{
	char letter;
	
	printf("\n\nif you Enter a Character is uppercase the program will convert into lowercase Or wiseversa = ");
	scanf("%c",&letter);
	mychar(letter);
	
	return 0;
}
