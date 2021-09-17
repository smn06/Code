//13
#include<iostream>
using namespace std;
double x[50],y[50][50],sum;

void backward_difference(int n,double y[][50])
{
for(int i=1;i<n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            y[j][i]=y[j][i-1]-y[j-1][i-1];
        }
    }

}

 int fac(int n)
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

void b_interpolation(int n,int val)
{
    sum=y[n-1][0]; 
    double u=(val-x[n-1])/(x[1]-x[0]); 
    
    for (int i=1;i<n;i++) { 
        sum+=((uval(i,u)*y[n-1][i])/fac(i)); 

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
    backward_difference(n,y);
    b_interpolation(n,value);
    cout<<"value at "<<value<<" is "<<sum<<endl;
}