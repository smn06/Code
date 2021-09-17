//8
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of data pairs\n"; 
    cin>>n;
    double x[n],y[n],a,b;
    cout<<"Enter the pairs\n";               
    for (int i=0;i<n;i++)
        cin>>x[i]>>y[i];
    double xsum=0,x2sum=0,ysum=0,xysum=0;                
    for (int i=0;i<n;i++)
    {
        xsum=xsum+x[i];                       
        ysum=ysum+y[i];                       
        x2sum=x2sum+pow(x[i],2);                
        xysum=xysum+x[i]*y[i];                    
    }
    a=(n*xysum-xsum*ysum)/(n*x2sum-xsum*xsum);           
    b=(x2sum*ysum-xsum*xysum)/(x2sum*n-xsum*xsum);            
    double slopes[n];                       
    for (int i=0;i<n;i++)
        slopes[i]=a*x[i]+b;               
    cout<<a<<"x + "<<b<<endl;        
} 