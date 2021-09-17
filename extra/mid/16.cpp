//16
#include<iostream>
using namespace std; 
double func(double x, double y) 
{ 
	return(x*x+y*y); 
} 
double rk(double x0,double y0,double x,double h) 
{ 
	int n = (int)((x-x0)/h); 
	double k1,k2,k3,k4,k5,y=y0; 
	for(int i=1;i<=n;i++) 
	{ 
		k1=h*func(x0,y); 
		k2=h*func(x0+0.5*h,y+0.5*k1); 
		k3=h*func(x0+0.5*h,y+0.5*k2); 
		k4=h*func(x0+h,y+k3); 
        y=y+(1.0/6.0)*(k1+2*k2+2*k3+k4);  
		x0=x0+h; 
	} 
	return y; 
} 

int main() 
{ 
	double x0,y,x,h; 
	cout<<"enter tha values x0,y,x,h"<<endl;
	cin>>x0>>y>>x>>h;
	cout<<"The value of y at x is : "<<rk(x0, y, x, h)<<endl; 
} 
