#include<stdio.h>
void main()
{
	FILE *fp;
	//write mode
	//creats a new file iffile doesn't exist
	//if file exists it will truncate the contents of file to zero
	fp=fopen("C:\\Users\\admin\\OneDrive\\sravanthi","w");
	printf("opened sucessfully");
	/*fputc('H',fp);//fp=filepointer
	fputc('E',fp);*/
	fputs("hello world",fp);
}
