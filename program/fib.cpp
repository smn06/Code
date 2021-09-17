#include<iostream>
using namespace std;
int a[100];
int fib(int c);
int main()
{
	int s;
	a[1]=1;
	a[2]=1;
	cin>>s;
	cout<<fib(s);
}
int fib(int b)
{
	if(a[b]!=0)
	return a[b];
	if(b==0)
	return a[b];
	if(b==1 || b==2)
	return a[b];
	a[b]=fib(b-1)+fib(b-2);
	return a[b];
}
	
