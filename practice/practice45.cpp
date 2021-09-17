#include<iostream>
using namespace std;
int main()
{
int n,i,su=0,cou=0;
cin>>n;
for(i=1;i<=n;i+=2)
{
	su=su+i;
	if(i%2!=0)
	cou++;
}
cout<<cou;
}
