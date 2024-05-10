#include<stdio.h>
int main()
{
	char x;
	printf("\nEnter a Character to show it is Vowel or not = ");
	scanf("%c",&x);
	
	if(x=='A' || x=='E' || x=='I' || x=='O' || x=='U' || x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
	{
		printf("\n\tYour Character is a vowel");
	}
	else
	{
		printf("\n\tYour Character is not a vowel");
	}
	
	return 0;
}
/*
1. Display "Enter a Character to show it is vowel or not".
2. read variable x
3. if user input is
	"a or e or i or o or u or A or E or I or O or U"
	Display Vowel
	else
	Display Not a vowel
4.end.*/
