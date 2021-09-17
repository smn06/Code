#include<stdio.h>
int add(int a,int b){
		return a+b;
	}
	int sub(int a,int b){
		return a-b;
	}
	
int function(int (*func)(int,int),int a,int b){
return func(a,b);
}
int main()
{
	
	//int o(int (*fnc)(int,int),int a,int b);
	//return o(a,b);/
	int a=10,b=20,c,d,e;
	//fnc=&add;
	printf("result %d",function(&add,a,b));
	//fnc=&sub;
	printf("result %d",function(&sub,a,b));
	//e=fnc+fnc;
	//int d=(fnc=&add)+(fnc=&sub);
	//printf("reee %d",e);
	return 0;
}
	
	
