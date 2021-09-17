//6
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
#define f1(x,y,z)  (95-11*y+4*z)/83
#define f2(x,y,z)  (71-3*x-8*y)/29
#define f3(x,y,z)  (104-13*z-7*x)/52

int main()
{
double x0=0,y0=0,z0=0,x1,y1,z1,e1,e2,e3,e;
int step=1;
e=0.0001;
do
{
x1=f1(x0,y0,z0);
y1=f2(x0,y0,z0);
z1=f3(x0,y0,z0);
e1=fabs(x0-x1);
e2=fabs(y0-y1);
e3=fabs(z0-z1);
step++;
x0=x1;
y0=y1;
z0=z1;
}
while(e1>e && e2>e && e3>e);
cout<<"x= "<<x1<<", y= "<<y1<< " and z= "<< z1<<endl;
}