#include<bits/stdc++.h>
using namespace std;
int main()
{
	string text,pat;
	getline(cin,text);
	getline(cin,pat);
	int i,j,m,n;
	n=text.size();
	m=pat.size();
	for( i=0;i<=n-m;i++)
	{
		for( j=0;j<m;j++)
		
	   if (text[i+j]!=pat[j])
	        break;		
		
	  if(j==m)
	  cout<<m<<j<<i<<endl;
	
	}
		}
		
