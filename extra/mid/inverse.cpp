//14
#include<iostream>
using namespace std;
double x[100],fy[100];

void lag_inv(int n,double x[],double y[],double v)
{
    double val,y1=0;
    for(int i=0;i<n;i++)
    {
    val=1;
    for(int j=0;j<n;j++)
    {
        if(i!=j)
        {
            val*=(v-x[j])/(x[i]-x[j]);
        }
    }  
        y1+=val*fy[i];
        //val+=x[i]*((v-fy))
    }
    cout<<"value will be "<<y1<<endl;
}

int main()
{
    int n;
    double po;
    cout<<"numbers?\n";
    cin>>n;
    cout<<"data..?\n";
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>fy[i];
    }
    cout<<"point?\n";
    cin>>po;
    lag_inv(n,x,fy,po);

    }
    

