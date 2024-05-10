#include<stdio.h>
void vowel(char mychar)
{
	if(mychar == 'a' || mychar == 'e' || mychar == 'i' || mychar == 'o' || mychar == 'u'||mychar == 'A' || mychar == 'E' || mychar == 'I' || mychar == 'O' || mychar == 'U')
	{
		printf("Your Character is Vowel\n");
	}
	else
	{
		printf("Not a Vowel");
	}
}
int main()
{
	char mychar;
	printf("Enter your Character to Show it is Vowel or not = ");
	scanf("%c\n",&mychar);
	vowel(mychar);
	
	return 0;
}
