#include<iostream>
#include<vector>
#define ll long long
#define pb push_back
using namespace std;
vector<double> x;
double x0,h,xf;

double f(double a){
	return 3*a*a+1; 
}
double e(ll n, double y0){
	if(n==0)
		return y0;
	return e(n-1,y0)+h*f(x[n-1]);
}

int main(){
	double y0;
	cin>>x0>>y0>>h>>xf;
	ll m=0;
	x.pb(x0);
	while(x0!=xf){
		m++;
		x0+=h;
		x.pb(x0);
	}
	cout<<e(m,y0)<<endl;
}