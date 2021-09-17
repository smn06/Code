#include <bits/stdc++.h> 
using namespace std; 

#define N 3 


void getCofactor(int matrix[N][N], int temp[N][N], int p, int q, int n) 
{ 
	int i = 0, j = 0; 

	for (int row = 0; row < n; row++) 
	{ 
		for (int col = 0; col < n; col++) 
		{ 
			if (row != p && col != q) 
			{ 
				temp[i][j++] = matrix[row][col]; 
				if (j == n - 1) 
				{ 
					j = 0; 
					i++; 
				} 
			} 
		} 
	} 
} 

int determinant(int matrix[N][N], int n) 
{ 
	int D = 0;
	if (n == 1) 
		return matrix[0][0]; 
	int temp[N][N]; 
	int sign = 1; 
	for (int f = 0; f < n; f++) 
	{ 
		getCofactor(matrix, temp, 0, f, n); 
		D += sign * matrix[0][f] * determinant(temp, n - 1); 		
		sign = -sign; 
	} 
	return D; 
} 

int main() 
{ 
	 int matrix[N][N] = {{2, -3, 1}, 
					{2, 0, -1}, 
					{1, 4, 5}}; 
	cout<<"Determinant of the matrix is :"<<determinant(matrix, N)<<endl;
	
	return 0; 
} 
