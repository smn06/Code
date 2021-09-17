#include<iostream>
#include<cmath> 
#include<vector>
using namespace std;
#define ll long long
#define pb push_back
vector<double> y;

double func(double a,double b,int n,double h){
	for(double i = a; i<=b; i+=h){
		y.pb(log10(i));
		}
	double ans =0;
	for(int i = 1; i< n; i++){
		ans+=y[i];
	}
	return (h/2 * (y[0]+y[n])+ (2* ans )) ; 
}

int main(){
	int n;
	cin>>n;
	double a,b,h;
	cin>>a>>b;
	h = (b-a)/n;
	double ans = func(a,b,n,h);
	cout<<ans;
}