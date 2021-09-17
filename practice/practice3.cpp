#include<stdio.h>
int main()
{
	int a=5,*b;
	b=&a;
	printf("%d",a);
	printf("%p",&a);
	printf("%d",*b);
	printf("%p",&b);
	
	return 0;
}
