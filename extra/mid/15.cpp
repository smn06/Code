//15
#include <iostream>
using namespace std;

double x[50],y[50][50];

double term(int i,double val,double x[])
{
        double t=1;
        for(int j=0;j<i;j++)
            t*=(val-x[j]);
        return t;
}

double cal(int n,double val,double x[], double y[][50])
{
    
    double sum=y[0][0];
    for(int i=1;i<n;i++){
        sum+=(term(i,val,x)*y[0][i]);
    }
    return sum;

}


void diff_tab(int n,double x[],double y[][50])
{
for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            y[j][i]=(y[j][i-1]-y[j+1][i-1])/(x[j]-x[i+j]);
        }
    }

}

int main()
{
    int n;
    double v;
    cout<<"how many numbers?\n";
    cin>>n;
    cout<<"values\n";
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i][0];}
    cout<<"desired val?\n";
    cin>>v;
    diff_tab(n,x,y);
    cout<<"value at "<<v<<"  is  "<<cal(n,v,x,y)<<endl;
}
