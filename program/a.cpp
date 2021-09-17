/*#include<stdio.h>
#include<stdlib.h>
int left(int i)
{
	return 2*i;
}
int right(int i)
{
	return 2*i+1;
}
int parent(int i)
{
	return i/2;
}
int max(int h[],int size)
{
	int i,p;
	for(i=size;i>1;i--)
	{
		p=parent(i);
		printf("i=%d p= %d\t h[i]=%d  h[p]=%d\n",i,p,h[i],h[p]);
		if(h[p]<h[i])
		return 0;
	}
	return 1;
}
void mheap(int heap[],int size,int i)
	{
		int l,r,largest,t;
		l=left(i);
		r=right(i);
		if(l<=size && heap[l]>heap[i])
		{
			largest=l;
		}
		else 
		  largest=i;
		  
		  
		 if(r<=size && heap[r]>heap[largest])
		 largest=r;
		 if(largest!=i)
		 {
			 t=heap[i];
			 heap[i]=heap[largest];
			 heap[largest]=t;
			 mheap(heap,size,largest);
		 }
	 }
void print(int heap[],int size)
{
	int i;
	for(i=1;i<=size;i++){
		printf(" %d  ",heap[i]);
	  // printf("i=%d",i);
	  }
	   printf("\n\n");
	}
	
void build(int heap[],int size)
{
	int i;
	for(i=size/2;i>=1;i--)
	{printf("i=%d",i);
	
	print(heap,size);
	//printf("i=%d",i);
	  
	
	mheap(heap,size,i);}
	//print(heap,size);}
	   
	
	}
int main()
	{
		int heap[]={0,12,7,1,3,10,17,19,2,5};
		int size=9;
		
		print(heap,size);
		//mheap(heap,size,3);
		build(heap,size);
		print(heap,size);
	   // mheap(heap,size,4);
		//print(heap,size);
	    
	
	
	}
		
*/		
	#include<iostream>
	#include<algorithm>
	using namespace std;
int a[100][100]={0};
void search(int [100][100],int,int,int);
int main()
{
	int node,edge,m;
	cout<<	"Node....\n";
	cin>>node;
	cout<<"edge......\n";
    cin>>edge;
    int i,n1,n2;
    for(i=0;i<edge;i++)
    {
		cin>>n1>>n2;
		a[n1][n2]=a[n2][n1]=1;
		m=max(n1,n2);
	}
	cout<<"enter the node"<<endl;
	//int n12,n22;
	cin>>n1;
	cout<<"enter the sub u wanna search\n";
	cin>>n2;
	search(a,n1,n2,m);
	/*for(i=1;i<=m;i++)
	 
	{
		cout<<i<<"--->>";
		
		for(j=1;j<=m;j++){
	    	if(a[i][j]!=0)
			cout<<" "<<j;}
		cout<<"\n";
	}*/
}
void search(int ab[100][100],int no,int sub,int maxx)
{
		int i,j;
		for(i=no;i<=maxx;i++)
		{
		  for(j=0;j<=maxx;j++)
		 {
			if(a[i][j]==sub)
			 {
				 cout<<"path found\n";
				 break;
			 }
			 else{
			  cout<<"path not found\n";
			  break;}
		  }
	  }
  }
		
		
		
		
		
		
		
		
		
		
