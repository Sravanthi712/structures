#include<stdio.h>
void main()
{
	FILE *fp;
	//Append mode
	//creats a new file if file doesn't exist
	//if file exsist it will append the content at
	//the end of exsisting data
	fp=fopen("C:\\Users\\admin\\OneDrive\\sravanthi","a");
	printf("File opened sucessfully\n");
	fputs("This is append mode",fp);
}
