#include<stdio.h>
void main()
{
 FILE *fp;
 fp=fopen("c:\DELL","r");
 if (fp==NULL)
 {
 	printf("File not found\n");
}
else
{
	printf("File opened sucessfully\n");//outut :file not found
	
	/*char ch=fgetc(fp);
	printf("%c",ch);
	ch=fget(fp);
	printf("\n%c",ch);*/
	char str[100];
	fgets(str,40,fp);
	print("%s",str);
}
}
