#include<stdio.h>
struct contact
{
	char name[50];
	char email[50];
	char mobile[50];	
};
int main()
{
	struct contact cont_one;
	snprintf(cont_one.name, sizeof(cont_one.name), "Muhammad Shoaib");
	snprintf(cont_one.email, sizeof(cont_one.email), "shoaibgull1616@gmail.com");
	snprintf(cont_one.mobile, sizeof(cont_one.mobile), "03184200023");
	printf("\t\nName = %s", cont_one.name);
	printf("\t\nEmail = %s", cont_one.email);
	printf("\t\nMobile = %s", cont_one.mobile);
	return 0;
}
