#include<stdio.h>
#include<stdlib.h>
int main(int arc,char *arv[])
{
	int a,b,c;
	a=atoi(arv[1]);
	b=atoi(arv[2]);
	c=a+b;
	printf("%d+%d=%d\n",a,b,c);
	return 0;
}
