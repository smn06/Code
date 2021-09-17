/*
#include <cstdio>
using namespace std;
int main() {
int k, S[12], count = 0;
while (scanf("%d", &k), k) {
if (count++)
printf("\n");
for (int i = 0; i < k; i++)
scanf("%d", &S[i]);
for (int a = 0; a < k - 5; a++)
for (int b = a + 1; b < k - 4; b++)
for (int c = b + 1; c < k - 3; c++)
for (int d = c + 1; d < k - 2; d++)
for (int e = d + 1; e < k - 1; e++)
for (int f = e + 1; f < k; f++)
printf("%d %d %d %d %d %d\n", S[a], S[b], S[c],
S[d], S[e], S[f]);
}
return 0;
}
*//*
#include <stdio.h>
int left(int n)
{
	return n*2;
}
int right(int n)
{
	return 2*n+1;
}
int parent(int i)
{
	return i/2;
}
int max_heap(int h[],int size)

{
	int i,p;
	for(i=size;i>1;i--)
	{
		p=parent(i);
		{
			if(h[p]<h[i])
			return 0;
		}
	}
		return 1;
	}
				
void max_heapify(int h[],int size,int i)
{
	int l,r,largest,t;
	l=left(i);
	r=right(i);
	if(l<=size && h[l]>h[i])
	   largest=l;
	else
       largest=i;
     if(r<=size && h[r]>h[largest])
        largest=r;
       if(largest!=i)
       {
		   t=h[i];
		   h[i]=h[largest];
		   h[largest]=t;
	   max_heapify(h,size,largest);
	   
	   }
}	     
void print(int h[],int size)
{
	int i;
	for(i=1;i<=size;i++)
	
		printf(" %d ",h[i]);
	printf("\n\n");
}
void build(int h[],int size)
{
	int i;
	for(i=size/2;i>=1;i--)
	max_heapify(h,size,i);
}
void sort(int h[],int size)
{
	int i,t;
	for(i=size;i>1;i--)
	{
		t=h[1];
		h[1]=h[i];
		h[i]=t;
		size-=1;
		max_heapify(h,size,1);
		print(h,size);
	
	}}
int main()
{
	int size=9;
	int hh[]={0,12,7,1,3,10,17,19,2,5};
	print(hh,size);
	build(hh,size);
	//max_heapify(hh,size,3);
	print(hh,size);
	sort(hh,size);
	print(hh,size);
	
} 

*/
#include<stdio.h>
int main()
{
	FILE *a;
	//char file[]="wadda.txt";
	a=fopen("wad.txt","w");
	fprintf(a,"fucking buther shit\n");
	fprintf(a,"fucking butcher fucking shit");
	fclose(a);
}
