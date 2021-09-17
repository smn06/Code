//4
#include<iostream>
using namespace std;
#define N 10
double arr[N][N],x[N],rat;
int main()
{
	int i,j,k,n;
	cout<<"variables?";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			cout<<"arr["<< i<<"]"<< j<<"]= ";
			cin>>arr[i][j];
		}
	}	
	for(i=1;i<=n-1;i++)
	{
	if(arr[i][i]==0.0)
	{
	cout<<"Error!";
	exit(0);
	}
		for(j=i+1;j<=n;j++)
		{
			rat=arr[j][i]/arr[i][i];

			for(k=1;k<=n+1;k++)
			{
				arr[j][k]=arr[j][k]-rat*arr[i][k];
			}
		}
	}
	x[n]=arr[n][n+1]/arr[n][n];
	for(i=n-1;i>=1;i--)
	{
	x[i]=arr[i][n+1];
		for(j=i+1;j<=n;j++)
		{
		x[i]=x[i]-arr[i][j]*x[j];
		}
		x[i]=x[i]/arr[i][i];
	}
	cout<<endl<<"Solution: "<<endl;
	for(i=1;i<=n;i++)
	{
	cout<<"x["<<i<<"] = "<<x[i]<< endl;
	}
} 
