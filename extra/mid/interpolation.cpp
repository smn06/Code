//12
#include<iostream>
using namespace std;
double x[50],y[50][50],sum;

void forward_difference(int n,double y[][50])
{
for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            y[j][i]=y[j+1][i-1]-y[j][i-1];
        }
    }
}

long long int fac(int n)
{
    int fa=1;
    for(int i=2;i<=n;i++)
        fa*=i;
    return fa;
}

double uval(int n,double u)
{
    double t=u;
    for(int i=1;i<n;i++)
        t*=(u+i);
    return t;
}

void f_interpolation(int n,int val)
{
    sum=y[0][0]; 
    double u=(val-x[0])/(x[1]-x[0]); 
    for (int i=1;i<n;i++) { 
        sum+=(uval(i,u)*y[0][i])/fac(i); 

    } 
    
}
int main()
{
    int n,value;
    cout<<"How many number?"<<endl;
    cin>>n;
    cout<<"Enter the value"<<endl;
    cin>>value;
    cout<<"enter those"<<endl;
    for( int i=0; i<n;i++)
    {
        cin>>x[i]>>y[i][0];
    }
    forward_difference(n,y);
    f_interpolation(n,value);
    cout<<"value at "<<value<<"is "<<sum<<endl;
}
/*
140 3.685
150 4.84
160 6.302
170 8.076
180 10.225*/