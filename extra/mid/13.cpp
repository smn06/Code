//13
#include<iostream>
#include<cmath>
#include<vector> 
#define ll long long
#define pb push_back
using namespace std;
vector<double> y;

double f(int n,double h){
	double ev=0,od=0;
	for(int i=1;i<n;i++){
		if(i%2==0)
			ev+=y[i];
		else
			od+=y[i];
	}
	return (h/3.0)*((y[0]+y[n-1])+4*od+2*ev); 
}

int main(){

	int n;
	cin>>n;
	double a,b,h;
	cin>>a>>b;
	h=(b-a)/n;
	for(double i=a;i<=b;i+=h){
		y.pb(exp(sin(i)));
	}
	cout<< f(n,h)<<endl;
}