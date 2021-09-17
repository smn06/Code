//12
#include<iostream>
#include<vector>
#include<cmath>
#define ll long long
#define pb push_back
using namespace std;
vector<double>y;

double f(int n,double h){
	double ans=0;
	for(int i=1;i<n;i++){
		ans+=y[i];
	}
	return h/2.0*(y[0]+y[n]+2*ans) ; 
}

int main()
{
	int n;
	cin>>n;
	double a,b,h;
	cin>>a>>b;
	h = (b-a)/n;
	for(double i=a;i<=b;i+=h){
		y.pb(log10(i));
	};
	cout<< f(n,h)<<endl;
}