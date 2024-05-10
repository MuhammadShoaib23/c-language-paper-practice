#include<stdio.h>
struct contact
{
	char name[50];
	char email[50];
	char mobile[15];
	
};
int main()
{
	struct contact cont_one;
	
	snprintf(cont_one.name,sizeof(cont_one.name ),"Muhammad Shoaib");
	snprintf(cont_one.email,sizeof(cont_one.email ),"shoaibgull1616@gmail.com");
	snprintf(cont_one.mobile,sizeof(cont_one.mobile ),"03184200023");
	
	FILE *file = fopen("contacts.dat","wb");
	if(file==NULL)
	{
		perror("error openning file");
		return 1;
	}
	fwrite(&cont_one,sizeof(struct contact),1,file);
	fclose(file);
	printf("\nContact information stored in 'contacts.dat' successfully.");
	
	return 0;
}
