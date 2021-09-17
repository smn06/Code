//1
#include<iostream>
using namespace std;

double mat[5][5];

void cal(double a[][5])
{
    double ans=0;
    for(int i=0;i<3;i++)
        ans+=(a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3]-a[1][(i+2)%3]*a[2][(i+1)%3]));
    cout<<ans<<endl;
}

int main(){
        
        for(int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                cout<<"insert mat["<<i<<"]["<<j<<"] ";
                cin>>mat[i][j];
            }
        }
    cal(mat);

}