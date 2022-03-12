//copying the contents of one file into another
#include<stdio.h>
void main()
{
	 FILE *fp1,*fp2;
	 fp1=fopen("C:\\Users\\admin\\OneDrive\\sravanthi","r");
	 fp2=fopen("C:\\Users\\admin\\OneDrive\\sravanthi","w");
	 char ch;
	 while(1)
	 {
	 	ch=fgetc(fp1);
	 	if(ch==EOF)//End of file
	 	{
	 		break;
		 }
		 fputc(ch,fp2);
	 }
}
