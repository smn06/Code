//2
#include<bits/stdc++.h> 
using namespace std; 
#define N 3
void coff(int A[N][N],int temp[N][N],int p,int q,int n) 
{ 
	int i=0,j=0; 

	for(int row=0;row<n;row++) 
	{ 
		for(int col=0; col < n; col++) 
		{ 
			if(row!=p&&col!=q) 
			{ 
				temp[i][j++]=A[row][col]; 

				if(j==n-1) 
				{ 
					j=0; 
					i++; 
				} 
			} 
		} 
	} 
} 

int determ(int A[N][N],int n) 
{ 
	int D=0; 
	if (n==1) 
		return A[0][0]; 
	int temp[N][N];  
	int sign=1; 
	for(int f=0;f<n;f++) 
	{ 
		coff(A,temp,0,f,n); 
		D+=sign*A[0][f]*determ(temp,n-1); 
		sign=-sign; 
	} 
	return D; 
} 

void adjoint(int A[N][N],int adj[N][N]) 
{ 
	if (N == 1) 
	{ 
		adj[0][0]=1; 
		return; 
	} 

	int sign=1,temp[N][N]; 

	for(int i=0;i<N;i++) 
	{ 
		for(int j=0;j<N;j++) 
		{ 
			coff(A,temp,i,j,N); 
			sign=((i+j)%2==0)?1:-1; 

			adj[j][i]=(sign)*(determ(temp,N-1)); 
		} 
	} 
} 

bool inverse(int A[N][N], float inv[N][N]) 
{ 
	int det=determ(A, N); 
	if(det==0) 
	{ 
		cout << "Can't find inv"; 
		return false; 
	} 
	int adj[N][N]; 
	adjoint(A,adj); 

	for(int i=0;i<N;i++) 
		for(int j=0;j<N;j++) 
			inv[i][j]=adj[i][j]/float(det); 

	return true; 
} 


template<class T> 
void display(T A[N][N]) 
{ 
	for(int i=0; i<N; i++) 
	{ 
		for(int j=0; j<N; j++) 
			cout<<A[i][j]<<" "; 
		cout<<endl; 
	} 
} 

void multiply(float mat1[][N],int mat2[][N],int res[][N]) 
{ 
    int i, j, k; 
    for(i=0;i<N;i++) 
    { 
        for(j=0;j<N;j++) 
        { 
            res[i][j]=0; 
            for(k=0;k<N;k++) 
                res[i][j]+=mat1[i][k]*mat2[k][j]; 
        } 
    } 
} 
int main() 
{ 
	int A[N][N] = { 
		{2, 2, 4},
		{3, 1, 2},
		{1, 4 ,3}
	}; 
	int B[][3]={
		{50},
		{60},
		{23}
	};
	int res[][3]={
		{0},
		{0},
		{0}
	};
	int adj[N][N];
	float inv[N][N];
	cout << "Input matrix is :\n"; 
	display(A); 
	cout << "\nThe Adjoint is :\n"; 
	adjoint(A, adj); 
	display(adj); 
	cout << "\nThe inv is :\n"; 
	if (inverse(A,inv)) 
		display(inv); 
	multiply(inv,B,res);
	cout<<"Result: "<<endl;
	cout<<"x="<<res[0][0]<<endl;
	cout<<"y="<<res[1][0]<<endl;
	cout<<"z="<<res[2][0]<<endl;
	} 
