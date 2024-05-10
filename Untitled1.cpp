#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr = fopen("anna.txt","w");
	fprintf(fptr,"hello shoaib khan kakar alizai");
	fprintf(fptr,"hello anna jane");
	fptr = fopen("sss.txt","w");
	fclose(fptr);
	
	return 0;
}
