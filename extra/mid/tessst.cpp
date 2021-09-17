#include<iostream>  //Header file for cin & cout
#include<cmath>  //Header file for mathematical operartions
#include<iomanip> //Header file for precession
using namespace std;  //calling the standard directory

//Given dy/dx
float f(float(x),float(y))
{
return ((1/10)*(2*x+2*y));
}

int main()
{
int n,i,j;
float h;
cout<<"Aim : To solve a differential equation by Fourth Order Runge-Kutta's Method"<<endl;
cout<<"Given Equtaion is dy/dx = 1 + y^2 "<<endl;

//Entering the Number of Iterations
cout<<"Enter the number of solutions "<<endl;
cin>>n;

//Entering the width of step size
cout<<"Enter The Value of Step Size "<<endl;
cin>>h;

long double y[n],e[n],x[n],Y[n],L[n],k[n][n];

//Entering the initial values of x & y
cout<<"Enter the value of x0 "<<endl;
cin>>x[0];
cout<<"Enter The Value of y0 "<<endl;
cin>>y[0];

//Calculating the value of x
for(i=1;i<=n;i++)
 {
 x[i]=x[i-1]+h;
 }

cout<<"Solution of the given differential equation by Fourth Order Runga Kutta Method is "<<endl;

//Calculating & Printing the values of k1, k2, k3, k4 & y
for(j=1;j<=n;j++)
 {
 k[1][j]=h*f(x[j-1],y[j-1]);
 cout<<"K[1] = "<<k[1][j]<<"\t";
 k[2][j]=h*f(x[j-1]+(h/2),y[j-1]+(k[1][j]/2));
 cout<<"K[2] = "<<k[2][j]<<"\t";
 k[3][j]=h*f(x[j-1]+(h/2),y[j-1]+(k[2][j]/2));
 cout<<"K[3] = "<<k[3][j]<<"\t";
 k[4][j]=h*f(x[j-1]+h,y[j-1]+k[3][j]);
 cout<<"K[4] = "<<k[4][j]<<"\n"; 
 y[j]=y[j-1]+((k[1][j]+2*k[2][j]+2*k[3][j]+k[4][j])/6);
 cout<<"y["<<h*j<<"] = "<<setprecision(5)<<y[j]<<endl;
 }
 
return 0;
}