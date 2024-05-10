#include<stdio.h>
int main()
{
	char mychar;
	printf("Enter your Character to print it is Vowel or not = ");
	scanf("%c",&mychar);
	if(mychar == 'a' || mychar == 'e' || mychar == 'i' || mychar == 'o' || mychar == 'u' || mychar == 'A' || mychar == 'E' || mychar == 'I' || mychar == 'O' || mychar == 'U')
	{
		printf("Your Character is Vowel\n");
	}
	else
	{
		printf("Not a Vowel");
	}
	return 0;
}
