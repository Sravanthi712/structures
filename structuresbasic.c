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
	
   printf("PIN\t\tName\t\Percentage\n");
	printf("---------------------------------------\n");
	printf("%d\t\t%s\t\t%.2f\n",s1.pin,s1.name,s1.perc);
}
