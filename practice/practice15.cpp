#include<stdio.h>
#include<string.h>
int year(int n)
{
	if(n%400==0 || (n%4==0 && n%100!=0))
	printf("%d is a leap year",n);
	else {
		printf("%d is not a leap year",n);}
	return n;
}
	int main()
{
   int a,b;
   scanf("%d",&a);
   b=year(a);
   
   return 0;
}
