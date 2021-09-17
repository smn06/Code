//11
#include <iostream>
using namespace std;

double x[50],y[50][50];


void forward_difference(int n,double y[][50])
{

for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            y[j][i]=y[j+1][i-1]-y[j][i-1];
            5
        }
    }
}

void print(int n)
{
for(int i=0;i<n;i++)
    {
        cout<<x[i];
        for(int j=0;j<n-i;j++)
        {
            cout<<"\t"<<y[i][j];
        }
        cout<<endl;
    }
}


int main()
{
    int n;
    cout<<"Size of data?\n";
    cin>>n;
    cout<<"Enter those\n";
    for( int i=0; i<n;i++)
    {
        cin>>x[i]>>y[i][0];

    }
    
    forward_difference(n,y);
    print(n);
    
    
}
