//11
#include<iostream>
#include<vector>
#define ll long long
#define pb push_back
using namespace std;
vector<double> x;
vector<double> y;
ll n;

void d_t(vector<vector<double>>&arr){
	for(int i =0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(i==0){
				arr[i].pb(y[j]);
			}
			else{
				arr[i].pb(arr[i-1][j+1]-arr[i-1][j]);
			}
		}
	}
}

double fact(ll n){
	if( n==1)
		return 1;
	else
		return n*fact(n-1);
}

double u_term(ll i,double xf,double h){
	double u=(xf-x[0])/h;

	if(i==0)
		return 1;
	else if(i==1)
		return 2*u-1;
	else if(i==2)
		return 3*u*u-6*u+2;
	else if(i==3){
		return 4*u*u*u-18*u*u+22*u-6 ;
	}
	else
		return 1;
}
double f_der(double xf,vector<vector<double>>arr){
	double h = x[1]-x[0];
	double ans = 0;
	for(int i =0;i<n-1;i++){	
		ans+=(arr[i+1][0]* u_term(i,xf,h))/fact(i+1);
	}
	ans /= h;
	return ans;
}
double s_der(double xf, vector<vector<double>>arr){
	double h=x[1]-x[0];
	double u=(xf-x[0])/h;
	double ans=0;	
	ans = arr[1][0]+((u-1)*arr[2][0])+(((6*u*u-18*u+11)/12.0)*arr[3][0]);
	ans /= (h*h);
	return ans;
}

int main(){
	cin>>n;
	vector<vector<double>>arr(n);
	for(ll i=0;i<n;i++){
		double t,t1;
		cin>>t>>t1;
		x.pb(t);
		y.pb(t1);
	}
	double xf;
	cin>>xf;
	d_t(arr);
	
	cout<<"First "<<f_der(xf,arr)<<endl;
	cout<<"Second "<<s_der(xf,arr)<<endl;
}