//3
#include<iostream>
using namespace std;

double mat[3][4];

double det(double a[][3])
{
    double ans=0;
    for(int i=0;i<3;i++)
    {    ans+=(a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3]-a[1][(i+2)%3]*a[2][(i+1)%3]));
    cout<<ans<<endl;
    }

    return ans;
}

void cal(double matrix[][4]) 
{ 
    double d[3][3]={ 
        {matrix[0][0],matrix[0][1],matrix[0][2]}, 
        {matrix[1][0],matrix[1][1],matrix[1][2]}, 
        {matrix[2][0],matrix[2][1],matrix[2][2]}}; 
    double D=det(d);
    cout<<D<<endl;
    double d1[3][3]={ 
        {matrix[0][3],matrix[0][1],matrix[0][2]}, 
        {matrix[1][3],matrix[1][1],matrix[1][2]}, 
        {matrix[2][3],matrix[2][1],matrix[2][2]}};
    double D1=det(d1);
    cout<<D1<<endl; 
    double d2[3][3]={ 
        {matrix[0][0],matrix[0][3],matrix[0][2]}, 
        {matrix[1][0],matrix[1][3],matrix[1][2]}, 
        {matrix[2][0],matrix[2][3],matrix[2][2]}};
    double D2=det(d2); 
    cout<<D2<<endl;
    double d3[3][3]={ 
        {matrix[0][0],matrix[0][1],matrix[0][3]}, 
        {matrix[1][0],matrix[1][1],matrix[1][3]}, 
        {matrix[2][0],matrix[2][1],matrix[2][3]}};
    double D3=det(d3);
    if (D != 0) { 
        double x=D1/D; cout<<"x "<<x<<endl;
        double y=D2/D; cout<<"y "<<y<<endl;
        double z=D3/D; cout<<"z "<<z<<endl; 
   } 
    else { 
        if (D1 == 0 && D2 == 0 && D3 == 0) 
            cout<<"Infinite solutions\n"; 
        else if (D1 != 0 || D2 != 0 || D3 != 0) 
            cout<<"No solutions\n"; 
   } 
} 
int main() 
{ 
  
   for(int i=0;i<3;i++)
        {
            for (int j=0;j<4;j++)
            {
                cout<<"insert mat["<<i<<"]["<<j<<"] ";
                cin>>mat[i][j];
            }
        }
    cal(mat); 
     
}