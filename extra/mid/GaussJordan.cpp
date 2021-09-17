#include<iostream>
#include<algorithm>
using namespace std; 
#define M 10 

int calc(double a[][M], int n) 
{ 
	int i,j,k=0,c,check=0,m=0; 
	for(i=0;i<n;i++) 
	{ 
		if(a[i][i]==0) 
		{ 
			c=1; 
			while((i + c)<n && a[i+c][i]==0) 
				c++;			 
			if((i+c)==n) { 
				check=1; 
				break; 
			} 
			for(j=i,k =0;k<=n;k++) 
				swap(a[j][k],a[j+c][k]); 
		}
		for(j=0;j<n;j++) { 
			if(i!=j) { 
				double pro=a[j][i]/a[i][i]; 
				for(k=0;k<=n;k++)				 
					a[j][k]=a[j][k]-(a[i][k])*pro;				 
			} 
		} 
	} 
	return check; 
} 
void print(double a[][M], int n, int check) 
{ 
	cout<<"Solution is : "; 

	if(check==2)	 
	cout<<"Infinite Solutions"<<endl;	 
	else if(check==3)	 
	cout<<"No Solution"<<endl; 
	else { 
		for(int i=0;i<n;i++)		 
			cout<<a[i][n]/a[i][i]<<" ";		 
	} 
} 
int consist(double a[][M],int n,int check) 
{ 
	int i,j; 
	double sum; 
	check=3; 
	for (i=0;i<n;i++) 
	{ 
		sum=0; 
		for(j=0;j<n;j++)		 
			sum=sum+a[i][j]; 
		if(sum==a[i][j]) 
			check=2;		 
	} 
	return check; 
} 
 
int main() 
{ 
	double a[M][M]={{ 1, 2, 1, 8 }, 
					{ 2, 3, 4, 20 }, 
					{ 4, 3, 2, 16}}; 					
	int n=3,check=0; 
	check=calc(a,n); 
	if(check==1)	 
		check=consist(a,n,check);	 
	cout<<endl; 	
	print(a,n,check); 

}  
