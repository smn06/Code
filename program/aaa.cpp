#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define v vector<int>
#define l(i,s,e) for(int i=s,i<e;i++)
int main()
{
	
	int t;
	cin>>t;
	int a,b,n,s;
	while(t--)
	{
		cin>>a>>b>>n>>s;
		int re=s/(a*n);
		   int mod=s-(re*(a*n));
		   if(re==1 && mod==0)
		   cout<<"YES";
		   else if(re>0 )
		   
	}
		  
	
	
	
}
