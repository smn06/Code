//problem no 1
#include <stdio.h>
int main()
{
  int n,c,d,t;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  int array[n];
  printf("Enter %d integers\n", n);
  for(c=0;c<n;c++) {
    scanf("%d",&array[c]);
  }
  for(c=1;c<=n-1;c++) {
    d=c;
    while(d>0 && array[d-1]>array[d])
     {
      t=array[d];
      array[d]=array[d-1];
      array[d-1]=t;
      d--;
    }
  }
  printf("Sorted list.....:\n"); 
  for(c=0;c<=n-1;c++) {
    printf("%d\n",array[c]);
  }
}/*
//problem no 2
#include<stdlib.h> 
#include<stdio.h> 
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
    int L[n1], R[n2]; 
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    i = 0; 
    j = 0;
    k = l; 
    while (i<n1 && j<n2) 
    { 
        if (L[i]<=R[j]) 
        { 
            arr[k]=L[i]; 
            i++; 
        } 
        else
        { 
            arr[k]=R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(int arr[],int l,int r) 
{ 
    if (l<r) 
    { 
        int m = l+(r-l)/2; 
		mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
        merge(arr, l, m, r); 
    } 
} 
void printArray(int A[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
} 
int main() 
{ 
    printf("ENter the number of array\n");
    int n;
    scanf("%d",&n);
    int arr[n],i=0;
    while(i<n && scanf("%d",&arr[i]))
    i++;
    mergeSort(arr,0,n-1); 
    printf("\nSorted array is \n"); 
    printArray(arr,n); 
    return 0; 
} 

//problem no 3
#include<iostream> 
using namespace std; 
void mergeArrays(int arr1[],int arr2[],int n1,int n2,int arr3[]) 
{ 
    int i = 0, j = 0, k = 0; 
    while (i<n1 && j <n2) 
    { 
        if (arr1[i] < arr2[j]) 
            arr3[k++] = arr1[i++]; 
        else
            arr3[k++] = arr2[j++]; 
    } 
  
    while (i < n1) 
        arr3[k++] = arr1[i++]; 
  
    while (j < n2) 
        arr3[k++] = arr2[j++]; 
} 
  
int main() 
{ 
    printf("ENter the number of first array\n");
    int n1;
    scanf("%d",&n1);
    int arr1[n1],i=0;
    while(i<n1 && scanf("%d",&arr1[i]))
    i++;
    i=0;
    printf("ENter the number of second array\n");
    int n2;
    scanf("%d",&n2);
    int arr2[n2];
    i=0;
    while(i<n2 && scanf("%d",&arr2[i]))
    i++;
     
    int arr3[n1+n2]; 
    mergeArrays(arr1, arr2, n1, n2, arr3); 
  
    cout << "Array after merging" <<endl; 
    for (int i=0;i<n1+n2;i++) 
        cout<<arr3[i]<< " "; 
  } 
//problem no 4
#include <stdio.h> 
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition(int arr[],int low,int high) 
{ 
    int pivot = arr[high]; 
    int i = (low - 1);  
    for (int j=low;j<=high-1;j++) 
    { 
        if (arr[j] <= pivot) 
        { 
            i++;
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("n"); 
} 
int main() 
{ 
    printf("ENter the number of array\n");
    int n;
    scanf("%d",&n);
    int arr[n],i=0;
    while(i<n && scanf("%d",&arr[i]))
    i++;
    quickSort(arr,0,n-1); 
    printf("Sorted array: n"); 
    printArray(arr, n); 
 }
 
//problem no 5
#include <stdio.h>
void swap(int *xp,int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
 
void selectionSort(int arr[],int n)
{
    int i,j,min;
 
    for (i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
          if(arr[j]<arr[min])
            min=j;
 
        swap(&arr[min], &arr[i]);
    }
}
 
void printArray(int arr[], int size)
{
    int i;
    for (i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
 
int main()
{
	printf("ENter the number of array\n");
    int n;
    scanf("%d",&n);
    int arr[n],i=0;
    while(i<n && scanf("%d",&arr[i]))
    i++;
    selectionSort(arr,n);
    printf("Sorted array: \n");
    printArray(arr,n);
   }

//problem no 6,7,8
#include<cstdio>
#include<cstdlib>
typedef struct nd node;
struct nd{
	int data;
	node *parent;
	node *left;
	node *right;
};
node *create(int item)
{
	node *ne=(node *)malloc(sizeof(node));
	if(ne==NULL)
	{
		printf("Couldnot allocate the memory");
		exit (1);
	}
	ne->data=item;
	ne->parent=NULL;
	ne->left=NULL;
	ne->right=NULL;
	return ne;
}
void left(node *nod,node *child)
{
	nod->left=child;
	if(child!=NULL)
	child->parent=nod;
}
void right(node *nod,node *child)
{
	nod->right=child;
	if(child!=NULL)
	child->parent=nod;
}
node *insert(node *root,node *nod)
{
	node *paren,*curren;
	
	if(root==NULL)
	{
		root=nod;
		return root;
	}
	paren=NULL;
	curren=root;
	while(curren!=NULL)
	{
		paren=curren;
		if(nod->data<curren->data)
		 curren=curren->left;
		else
		 curren=curren->right;
	}
    if(nod->data<paren->data)
       left(paren,nod);	
    else
       right(paren,nod);
       return root;
   }
node *bst()
{
	node *root,*nod;
	int i=7,a[]={5,17,3,7,12,19,1,4};
	root=create(10);
	while(i>=0 )
	{
		nod=create(a[i]);
		root=insert(root,nod);
		i--;
	}
return root;
}
void in(node *n)
{
	if(n->left!=NULL)
	  in(n->left);
	 printf("%d\n",n->data);
	if(n->right!=NULL)
	  in(n->right);
  }
 node *search(node *root,int item)
 {
	 node *nod=root;
	 while(nod!=NULL)
	 {
		 if(nod->data==item)
		 return nod;
		 
	     if(nod->data<item)
	      nod=nod->right;
	      else 
	       nod=nod->left;
	  }
  } 
 node *min(node *root)
	{
	node *n=root;
	while(n->left!=NULL)
		n=n->left;
		return root;
	}
node *trans(node *root,node *cur,node *neew)
{
	if(cur==root)
	root=neew;
	
	else if(cur==cur->parent->left)
	left(cur->parent,neew);
	else
	right(cur->parent,neew);
	return root;
}
node *del(node *root,node *nod)
{
	 node *small;
	
	if(nod->left==NULL)
	 root=trans(root,nod,nod->right);
	 
	 else if(nod->right==NULL)
	 root=trans(root,nod,nod->left);
	 
	 else
	 {
	   small=min(nod->right);
	   
	   if(small->parent!=nod)
	   {
		   root=trans(root,small,small->right);
		   right(small,nod->right);
	   }
	   root=trans(root,nod,small);
	   left(small,nod->left);
   }
   free(nod);
   return root;	
}
int main()
{
	node *root=bst();
    in(root);
    node *nod=search(root,1);
    if(nod!=NULL)
    {
		printf("Found\n");
	}
	else
		printf("not found\n");
	
    
   if(nod!=NULL)
   {
	   printf("Will delete %d\n",nod->data);
	   root=del(root,nod);
	   printf("BST");
	   in(root);
	   printf("\n");
   }
else 
       		printf("not found");

}

//problem no 9,10,11
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
	
	}
}
int main()
{
	int size=9;
	int hh[]={0,12,7,1,3,10,17,19,2,5};
	print(hh,size);
	build(hh,size);
	print(hh,size);
	sort(hh,size);
	print(hh,size);
	
} 
//problem no 12
#include<stdio.h>
#include<stdlib.h> 
typedef struct node
{
    struct node *next;
    int vertex;
}node;
 
node *G[20];   
int visited[20];
int n;
 
void DFS(int i)
{
    node *p;
   
    printf("\n%d",i);
    p=G[i];
    visited[i]=1;
    while(p!=NULL)
    {
       i=p->vertex;
       
       if(!visited[i])
            DFS(i);
        p=p->next;
    }
}
 void insert(int vi,int vj)
{
    node *p,*q;
    q=(node*)malloc(sizeof(node));
    q->vertex=vj;
    q->next=NULL;
    if(G[vi]==NULL)
        G[vi]=q;
    else
    {
        p=G[vi];
        while(p->next!=NULL)
            p=p->next;
        p->next=q;
    }
}

void read_graph()
{
    int i,vi,vj,no_of_edges;
    printf("Enter number of vertices:");
   
    scanf("%d",&n);
 
    for(i=0;i<n;i++)
    {
        G[i]=NULL;
        printf("Enter number of edges:");
           scanf("%d",&no_of_edges);
           for(i=0;i<no_of_edges;i++)
        {
            printf("Enter an edge(u,v):");
            scanf("%d%d",&vi,&vj);
            insert(vi,vj);
        }
    }
}
 
int main()
{
    int i;
    read_graph();
    for(i=0;i<n;i++)
        visited[i]=0;
    DFS(0);
}

//problem no 13
#include<stdio.h>
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;

void bfs(int v) {
	for(i=1;i<=n;i++)
		if(a[v][i] && !visited[i])
			q[++r]=i;
	if(f<=r) {
		visited[q[f]]=1;
		bfs(q[f++]);
	}
}

int main() {
	int v;
	printf("\n Enter the number of vertices:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++) {
		q[i]=0;
		visited[i]=0;
	}
	printf("\n Enter graph data in matrix form:\n");
	for(i=1;i<=n;i++) {
		for(j=1;j<=n;j++) {
			scanf("%d",&a[i][j]);
		}
	}	
	printf("\n Enter the starting vertex:");
	scanf("%d",&v);
	bfs(v);
	printf("\n The node which are reachable are:\n");
	
	for(i=1;i<=n;i++) {
		if(visited[i])
			printf("%d\t", i);
		else {
			printf("\n Bfs is not possible. Not all nodes are reachable");
			break;
		}
	}
}

//problem no 14
#include <iostream>
#include <cmath> 
using namespace std; 
 int f(int n) 
{ 
    if(n<0) 
        return 0; 
    if(n<=1) 
        return 1; 
    double digits = 0; 
    for (int i=2; i<=n; i++) 
        digits+=log10(i); 
    return floor(digits) + 1; 
} 
int main() 
{ 
     cout<<"ENter a number\n";
     int n;
     cin>>n;
     cout<<"Digits are ----> "<<f(n);
 }
*/