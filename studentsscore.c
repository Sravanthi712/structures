#include<stdio.h>
struct student
{
	int pin;
	char name[20];
	float perc;
};
void main()
{
	struct student s1={123,"Abc",90.00};
	struct student s2={124,"Abca",91.00};
	struct student s3={125,"Abcb",92.00};
	struct student s4={126,"Abcc",93.00};
	struct student s5={127,"Abcd",94.00};
    printf("PIN\t\tName\t\Percentage\n");
	printf("---------------------------------------------------------------------\n");
	printf("%d\t\t%s\t\t%.2f\n",s1.pin,s1.name,s1.perc);
	printf("%d\t\t%s\t\t%.2f\n",s2.pin,s2.name,s2.perc);
	printf("%d\t\t%s\t\t%.2f\n",s3.pin,s3.name,s3.perc);
	printf("%d\t\t%s\t\t%.2f\n",s4.pin,s4.name,s4.perc);
	printf("%d\t\t%s\t\t%.2f\n",s5.pin,s5.name,s5.perc);
}
