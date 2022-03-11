//c program to find the GCD of two given numbers using
//Eulids aroach and recursion
#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0)
	{
	return a;	
	}
	else
	{
		return gcd(b,a%b);
	}
}
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int res=gcd(a,b);
	printf("%d",res);
}
