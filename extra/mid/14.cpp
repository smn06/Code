//14
#include<iostream>
#include<vector>
#define ll long long
#define pb push_back
using namespace std;
vector<double>y;

double func(int n,double h){
	double ev=0,od=0;
	for(int i=1;i<n;i++){
		if(i%2==0)
			ev+=y[i];
		else
			od+=y[i];
	}
	return ((3*h)/8.0)*((y[0]+y[n])+(3*(y[1]+y[2]))); 
}
int main(){

	int n;
	cin>>n;
	double a,b,h;
	cin>>a>>b;
	h=(b-a)/n;
 	for(double i=a;i<=b;i+=h){
	    y.pb(i/(1+i));
	}
	cout<< func(n,h)<<endl;
}