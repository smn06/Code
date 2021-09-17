#include<iostream>
using namespace std;
int main()
{
	int a[4][3],b[4][3];
    for(int i=0;i<3;i++)
    {
		for(int j=0;j<4;j++)
		{
			cin>>a[i][j];
		}
	}
for(int i=0;i<3;i++)
    {
		for(int j=0;j<4;j++)
		{
			b[i][j]=a[i][j];
 }
}
for(int j=0;j<4;j++)
    {
		for(int i=0;i<3;i++)
		{
			cout<<b[j][i];
	cout<<" ";	
		}
cout<<"\n";	
	}    
}
