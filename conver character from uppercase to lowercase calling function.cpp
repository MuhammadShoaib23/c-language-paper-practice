#include<stdio.h>
int convert(char character)
{
	if(character>='A' && character<='Z')
	{
		character += 32;
		printf("Your character is = %c",character);
	}
	else
	return character;
}
int main()
{
	char character = 'A';
	convert(character);
	return 0;
}
