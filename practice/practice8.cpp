#include<stdio.h>
//#include<limits.h>
struct s{
	char a;
    int b;
    double c;
    }n1;
struct s1{
	char b;
    int h;
    double d;
    }n2;

int main()
{
	printf("Char size %lu \n",sizeof(n1.a));
	printf("int size %lu\n ",sizeof(n2.h));
	printf("double size %lu\n ",sizeof(double));
	printf("structure size %lu\n ",sizeof(s));
	printf("structure 2 size %lu\n ",sizeof(s1));
	
	return 0;
}
