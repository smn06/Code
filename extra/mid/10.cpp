//10
#include<iostream>
#include<vector>
#define ll long long
#define pb push_back
using namespace std;

vector<double> x;
vector<double> y;
ll n;

void dt(vector<vector<double>>&arr){
	for(int i=0;i<n;i++){
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

double f_der(double xf, vector<vector<double>>arr){
	double h=x[1]-x[0];
	double ans=0;
	for(int i=0;i<n-1;i++){
		if(i%2==0)
			ans+=arr[i+1][0]/(double)(i+1);
		else
			ans-=arr[i+1][0]/(double)(i+1);
	}
	ans/=h;
	return ans;
}

double s_der(double xf, vector<vector<double> >arr){
	double h=x[1]-x[0];
	double ans=0;
	for(int i=0;i<n-2;i++){
		if(i%2==0){
			if(i==4){
				double t=arr[i+2][0];
				t*=11/12.0;
				ans+=t;
			}
			else{
				ans+=arr[i+2][0];
			}
		}

		else
			ans-=arr[i+2][0];


	}
	ans/=(h*h);
	return ans;
}

int main(){
	cin>>n;
	vector<vector<double> > arr(n);

	for(ll i=0;i<n;i++){
		double t, t1;
		cin>>t>>t1;
		x.pb(t);
		y.pb(t1);
	}
	double xf;
	cin>>xf;
	dt(arr);
	cout<<"First "<<f_der(xf,arr)<<endl;
	cout<<"Second "<<s_der(xf,arr)<<endl;
}