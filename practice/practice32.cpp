#include<stdio.h>
int test1(int a)
{
a=a+10;
return a;
}
void test2(int *a)
{
*a=(*a)+10;
}
int main()
{
	int a=5;
	//int b=
	printf("a=%d",test1(a));
	test2(&a);
	
	printf("a=%d",a);
return 0;
}
