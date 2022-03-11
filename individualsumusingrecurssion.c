/*finding the sum of the digits of a
 given number using recursion*/
 #include<stdio.h>
 int d_sum(int n)
 {
 	if(n==0)
 	{
 		return 0;
	 }
	 else
	 {
	 	return n%10+d_sum(n/10);
	 }
 }
 void main()
 {
 	int n;
 	scanf("%d",&n);
 	printf("%d",d_sum(n));
 }
