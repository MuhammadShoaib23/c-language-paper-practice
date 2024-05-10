#i nclude<stdio.h>
void mychar(char letter)
{
	if(letter >= 'A' && letter <='Z')
	{
		letter += 32;
		printf("Your Character is now in lowercase = %c",letter);
	}
	else if(letter >= 'a' && letter <= 'z')
	{
		letter -= 32;
		printf("Your Character is now in uppercase = %c",letter);
	}
	else
	{
		printf("Your input is invalid");
	}
}
int main()
{
	char letter;
	printf("Enter your Character = ");
	scanf("%c",&letter);
	mychar(letter);
	
	return 0;
}
