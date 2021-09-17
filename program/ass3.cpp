
//problem no 1 (using recursion)
#include <stdio.h>
long long int fact(int n)
{
    if (n >= 1)
        return n*fact(n-1);
    else
        return 1;
}
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d is= %lld",n,fact(n));
 }

//problem no 1(not using recursion)
#include <stdio.h>
int main()
{
    int n,i;
    unsigned long long fact=1;
    printf("Enter an integer: ");
    scanf("%d",&n);
	if (n < 0)
        printf("Error!!!!!!");
    else
    {
        for(i=1;i<=n;++i)
        {
            fact*=i; 
        }
        printf("Factorial of %d = %llu",n,fact);
    }
}

 //problem no 2 (using recursion)
#include <stdio.h>
int fib(int num)
{
    if (num==0)
        return 0;
    else if (num==1)
        return 1;
    else
        return(fib(num-1)+fib(num-2));
} 
int main()
{
    int n;
    printf("Enter the nth number");
    scanf("%d", &n);
    if (n < 0)
        printf("Fibonacci of negative number is not possible.\n");
    else
        printf("The %d number in fibonacci series is %d\n", n,fib(n));
}

//problem no 2 (not using resursion)
#include <stdio.h> 
int fib(int n) 
{ 
  int f[n+2],i; 
  f[0] = 0,f[1] = 1; 
  for (i=2;i<=n;i++) 
  { 
      f[i] = f[i-1] + f[i-2]; 
  } 
  return f[n]; 
} 
  
int main () 
{ 
  int n;
  scanf("%d",&n); 
  printf("%d",fib(n)); 
} 
//problem no 3

#include <stdio.h>   
void to(int n,char f,char t,char a) 
{ 
    if (n==1) 
    { 
        printf("Move disk 1 from rod %c to rod %c\n", f,t); 
        return; 
    } 
    to(n-1,f,a,t); 
    printf("Move disk %d from rod %c to rod %c\n",n,f,t); 
    to(n-1,a,t,f); 
} 
  
int main() 
{ 
	printf("Enter the number of disks\n");
    int n = 4;
    scanf("%d",&n);
    to(n,'A','C','B');
}

//problem no 4
#include <stdio.h>
int ack(int m,int n)
{
    if(m==0)
        return n+1;
    else if(n == 0)
        return ack(m-1, 1);
    else 
		return ack(m-1,ack(m,n-1));
    
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("the value will be %d",ack(a,b));
}

//problem no 5
#include <stdio.h>
#define size 10
int front=-1;
int rear=-1;

void in(int queue[],int item)
{
    if ((front==0 && rear==size-1) || (front==rear + 1))
    {
        printf("queue is full");
        return;
    }
    else if (rear==-1)
    {
        rear++;
        front++;
    }
    else if (rear==size-1 && front>0)
        rear=0;
    else
        rear++;
    queue[rear]=item;
}

void dis(int queue[])
{
    int i;
    printf("\n");
    if (front > rear)
    {
        for (i = front;i<size;i++)
            printf("%d ",queue[i]);
        for (i = 0;i<=rear;i++)
            printf("%d ",queue[i]);
    }
    else
    {
        for (i=front;i<=rear;i++)
            printf("%d ",queue[i]);
    }
     printf("\n");
   
}

void del(int queue[])
{
    if (front==-1)
    {
        printf("Queue is empty\n");
    }
    else if (front==rear)
    {
        printf("%d deleted\n", queue[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("%d deleted\n", queue[front]);
        front++;
    }
}

int main()
{
	int n,c;
    int queue[size];
    do
    {
        printf("Circular Queue:\n1. Insert \n2. Delete\n3. Display\n0. Exit \n");
        scanf("%d", &c);
        switch (c)
        {
            case 1:
                printf("\nEnter number: ");
                scanf("%d", &n);
                in(queue, n);
                break;
            case 2:
                printf("\nEnter number: ");               
                del(queue);
                break;
            case 3:
                dis(queue);
                break;
        }
    }while (c!=0);
}


//problem no 6
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int pre[MAX];
int front=-1,rear=-1;

void check(int data)
{
    int i,j;
 
    for(i= 0;i<=rear;i++)
    {
        if (data>=pre[i])
        {
            for (j=rear+1;j>i;j--)
            {
                pre[j]=pre[j-1];
            }
            pre[i]=data;
            return;
        }
    }
    pre[i]=data;
}
 

void in(int data)
{
    if (rear>=MAX-1)
    {
        printf("\nQueue is overflow");
        return;
    }
    if ((front==-1) && (rear==-1))
    {
        front++;
        rear++;
        pre[rear] = data;
        return;
    }    
    else
        check(data);
    rear++;
  printf("\n");
}

void del(int data)
{
    int i;
 
    if ((front==-1) && (rear==-1))
    {
        printf("\nQueue is empty no elements to delete");
        return;
    }
 
    for (i=0;i<=rear;i++)
    {
        if (data==pre[i])
        {
            for (;i<rear;i++)
            {
                pre[i] =pre[i + 1];
            }
 
        pre[i]=-99;
        rear--;
 
        if (rear==-1) 
            front=-1;
        return;
        }
    }
    printf("%d not found\n", data);
}


void dis()
{
    printf("\n");
    if ((front==-1) && (rear==-1))
    {
        printf("\nQueue is empty");
        return;
    }
 
    for (;front<=rear;front++)
    {
        printf(" %d ",pre[front]);
    }
    front = 0;
    printf("\n");
}
 
int main()
{
    int n, ch; 
    do
    {
        printf("1 - Insert \n2 - Delete \n3 - Display \n0 - Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1: 
            printf("\nEnter value to be inserted : ");
            scanf("%d",&n);
            in(n);
            break;
        case 2:
            printf("\nEnter value to delete : ");
            scanf("%d",&n);
            del(n);
            break;
        case 3: 
            dis();
            break;
        case 4: 
            exit(0);
        }
    }
        while(ch!=0);
}

//problem no 7
#include <stdio.h>
#include <stdlib.h>
typedef struct nod node;
struct nod{
	int a;
	node *next;
};
node *create(int i,node *next)
{
	node *n=(node *)malloc(sizeof(node));
	if(n==NULL)
	{
		printf("Can't create a new node\n");
        exit(1);
	}
	n->a=i;
	n->next=next;
	return n;
}
void insert(node *a,int i)
{
	node *n=create(i,a->next);
	a->next=n;
}
void remove(node **head,int i)
{
	node *temp=*head,*pre;
	if(temp!=NULL && temp->a==i)
	{
		*head=temp->next;
		free(temp);
		return ;
	}
		while(temp!=NULL && temp->a!=i)
		{
			pre=temp;
			temp=temp->next;
		}
		if(temp==NULL) return;
		pre->next=temp->next;
		free(temp);
	}
		
 
void print(node *head)
{
	node *current=head;
	while(current!=NULL)
	{
		printf(" %d ",current->a);
		current=current->next;
	}
	printf("\n");
}
int main()
 { 		
  printf("You have to first Insert the List\n");
  printf("Enter the amount of numbers for making a linked list\n");
		int am;
		scanf("%d",&am);
		int arr[am],i=0;
		while(i<am && scanf("%d",&arr[i]))
		i++;
		node *head=NULL;
		head=create(arr[0],NULL);
		for(i=1;i<am;i++)
			insert(head,arr[i]);
		
  printf("Press the Number for the selected operation\n");
  printf("1-> Remove a index from The List \n");
  printf("2-> Print The List \n");   
  printf("3-> Exit from the terminal\n");
	while(EOF!=3){
	int n;
	scanf("%d",&n);
	
   if(n==1)
   {
	  printf("Enter the value you wants to remove\n");
	  int r;
	  scanf("%d",&r);
	  remove(&head,r);
	  printf("After removing the list wil be.....\n");
	  print(head);
   }
   else if(n==2)
   {
	   printf("Now printed linked listed are...\n");
      print(head);
   }
   else
       exit(1);
 }
}

//problem no 8
#include <stdio.h>
#include <stdlib.h>
typedef struct nod node;
struct nod{
	int a;
	node *next;
};
node *create(int i,node *next)
{
	node *n=(node *)malloc(sizeof(node));
	if(n==NULL)
	{
		printf("Can't create a new node\n");
        exit(1);
	}
	n->a=i;
	n->next=next;
	return n;
}
void search(int i,int a[],int max)
{
       int j;
       for(j=0;j<max;j++)
       {
		   if(i==a[j])
		   {
			   printf("%d found\n",i);
				break;
		   }
		   else{
		       printf("%d not found\n",i);
		       break;}
		}
}
void insert(node *a,int i)
{
	node *n=create(i,a->next);
	a->next=n;
} 
void print(node *head)
{
	node *current=head;
	while(current!=NULL)
	{
		printf(" %d ",current->a);
		current=current->next;
	}
	printf("\n");
}
int main()
 { 		
  printf("You have to first Insert the List\n");
  printf("Enter the amount of numbers for making a linked list\n");
		int am;
		scanf("%d",&am);
		int arr[am],i=0;
		while(i<am && scanf("%d",&arr[i]))
		i++;
		node *head=NULL;
		head=create(arr[0],NULL);
		for(i=1;i<am;i++)
			insert(head,arr[i]);
		
  printf("		Press the Number for the selected operation\n");
  printf("       1-> Search The List  \n");
  printf("       2-> Print The List \n");   
  printf("       0-> Exit from the terminal\n");
	while(EOF!=0){
	int n;
	scanf("%d",&n);
	
   if(n==1)
   {
	 printf("Enter the value you want to search\n");
	 int s;
	 scanf("%d",&s);
	 search(s,arr,am);
   }
   
   else if(n==2)
   {
	   printf("Now printed linked listed are...\n");
      print(head);
   }
   else
       exit(1);
 }
}

//problem no 9
#include <stdio.h>
#include <stdlib.h>
typedef struct nod node;
struct nod{
	int a;
	node *next;
};
node *create(int i,node *next)
{
	node *n=(node *)malloc(sizeof(node));
	if(n==NULL)
	{
		printf("Can't create a new node\n");
        exit(1);
	}
	n->a=i;
	n->next=next;
	return n;
}
void insert(node *a,int i)
{
	node *n=create(i,a->next);
	a->next=n;
}
void print(node *head)
{
	node *current=head;
	while(current!=NULL)
	{
		printf(" %d ",current->a);
		current=current->next;
	}
	printf("\n");
}
int main()
 { 		
  printf("You have to first Insert the List\n");
  printf("Enter the amount of numbers for making a linked list\n");
		int am;
		scanf("%d",&am);
		int arr[am],i=0;
		while(i<am && scanf("%d",&arr[i]))
		i++;
		node *head=NULL;
		head=create(arr[0],NULL);
		for(i=1;i<am;i++)
			insert(head,arr[i]);
		
  printf("Press the Number for the selected operation\n");
  printf("1-> Print The List \n");   
  printf("2-> Exit from the terminal\n");
	while(EOF!=2){
	int n;
	scanf("%d",&n);
	
    if(n==1)
   {
	   printf("Now printed linked listed are...\n");
      print(head);
   }
   else
       exit(1);
 }
}

//problem no 10
#include <stdio.h>
#include <stdlib.h>
typedef struct nod node;
struct nod{
	int a;
	node *next;
};
node *create(int i,node *next)
{
	node *n=(node *)malloc(sizeof(node));
	if(n==NULL)
	{
		printf("Can't create a new node\n");
        exit(1);
	}
	n->a=i;
	n->next=next;
	return n;
}
void remove(node **head,int i)
{
	node *temp=*head,*pre;
	if(temp!=NULL && temp->a==i)
	{
		*head=temp->next;
		free(temp);
		return ;
	}
		while(temp!=NULL && temp->a!=i)
		{
			pre=temp;
			temp=temp->next;
		}
		if(temp==NULL) return;
		pre->next=temp->next;
		free(temp);
	}
		

void insert(node *a,int i)
{
	node *n=create(i,a->next);
	a->next=n;
} 
void print(node *head)
{
	node *current=head;
	while(current!=NULL)
	{
		printf(" %d ",current->a);
		current=current->next;
	}
	printf("\n");
}
int main()
 { 		
  printf("You have to first Insert the List\n");
  printf("Enter the amount of numbers for making a linked list\n");
		int am;
		scanf("%d",&am);
		int arr[am],i=0;
		while(i<am && scanf("%d",&arr[i]))
		i++;
		node *head=NULL;
		head=create(arr[0],NULL);
		for(i=1;i<am;i++)
			insert(head,arr[i]);
		
  printf("Press the Number for the selected operation\n");
  printf("1-> Remove a index from The List \n");
  printf("2-> Print The List \n");   
  printf("0-> Exit from the terminal\n");
	while(EOF!=0){
	int n;
	scanf("%d",&n);
	
    if(n==1)
   {
	  printf("Enter the value you wants to remove\n");
	  int r;
	  scanf("%d",&r);
	  remove(&head,r);
	  printf("After removing the list wil be.....\n");
	  print(head);
   }
   else if(n==2)
   {
	   printf("Now printed linked listed are...\n");
      print(head);
   }
   else
       exit(1);
 }
}
	

//problem no 11
#include<iostream>
#include<cstdlib> 
using namespace std; 
typedef struct Node node;
struct Node 
{ 
    int data; 
    node *next; 
}; 
  
node *emp(node *last, int data) 
{ 
    if (last != NULL) 
      return last; 
  node *temp = (node*)malloc(sizeof(node)); 
    temp -> data = data; 
    last = temp; 
    last -> next = last; 
    return last; 
} 
  
node *beg(node *last, int data) 
{ 
    if (last == NULL) 
        return emp(last, data); 
    node *temp=(node *)malloc(sizeof(node)); 
    temp->data=data; 
    temp->next=last->next; 
    last->next=temp; 
    return last; 
} 
  
node *end(node *last, int data) 
{ 
    if (last == NULL) 
        return emp(last, data); 
    node *temp = (node *)malloc(sizeof(node)); 
    temp->data=data; 
    temp->next=last->next; 
    last->next=temp; 
    last=temp;   
    return last; 
} 
  
node *add(node *last, int data, int item) 
{ 
    if (last == NULL) 
        return NULL;   
    node *temp, *p; 
    p=last->next; 
    do
    { 
        if(p->data==item) 
        { 
            temp=(node *)malloc(sizeof(node)); 
            temp->data=data; 
            temp->next=p->next; 
            p->next=temp; 
  
            if(p==last) 
                last=temp; 
            return last; 
        } 
        p=p->next; 
    }  while(p!=last->next); 
  
    cout<<item<< " not present in the list." << endl; 
    return last; 
  
} 
  
void print(node *last) 
{ 
    node *p; 
  if (last == NULL) 
    { 
        cout << "List is empty." << endl; 
        return; 
    } 
    p=last->next; 
    do
    { 
        cout<<p->data<< " "; 
        p=p->next; 
  
    } 
    while(p!=last->next); 
  cout<<endl;
  } 
  
int main() 
{ 
    node *l = NULL; 
    cout<<"At starting you have to enter the First number\n"<<endl;
    int first;
    cin>>first;
    l=emp(l,first);
    int a,n,e;
	 
    do{
	 cout<<"Enter the number of the selected number \n";
	 cout<<"1.Add the number at beginning\n";
	 cout<<"2.Add the number at end\n";
	 cout<<"3.Print the list\n";
	 cout<<"0.Exit\n";
	 cin>>a;
	 switch(a)
	 {
		 case 1:
		 cout<<"Enter the number... \n";
		 cin>>n;
		 l=beg(l,n);
		 break;
		 case 2:
		 cout<<"Enter the number... \n";
		 cin>>e;
		 l=end(l,e);
		 break;
		 case 3:
		 print(l);
		 break; 
	 }
}
   while(a!=0);
   	} 

//problem no 12
#include <iostream> 
#include <cstdlib>
#include <cstdio>
using namespace std;
typedef struct Node node;
struct Node { 
    int data; 
    node* next; 
    node* prev; 
}; 
void push(node** head,int new_data) 
{ 
    node* new_node=(node*)malloc(sizeof(node)); 
    new_node->data=new_data; 
    new_node->next=(*head); 
    new_node->prev=NULL; 
    if ((*head)!=NULL) 
        (*head)->prev=new_node; 
    (*head)=new_node; 
} 
void insert(node* prev_node, int new_data) 
{ 
    if (prev_node==NULL) { 
        printf("the given previous node cannot be NULL"); 
        return; 
    } 
    node* new_node=(node*)malloc(sizeof(node)); 
    new_node->data=new_data; 
    new_node->next=prev_node->next; 
    prev_node->next=new_node; 
    new_node->prev=prev_node; 
    if (new_node->next != NULL) 
        new_node->next->prev=new_node; 
} 
  
void append(node** head,int new_data) 
{ 
    node* new_node=(node*)malloc(sizeof(node)); 
    node* last=*head;
    new_node->data=new_data; 
    new_node->next=NULL; 
    if (*head==NULL) { 
        new_node->prev=NULL; 
        *head=new_node; 
        return; 
    } 
  
    while (last->next != NULL) 
        last = last->next; 
    last->next = new_node; 
    new_node->prev = last; 
    return; 
} 
  
void print(node* nod) 
{ 
    node* last; 
    printf("printing in forward direction \n"); 
    while (nod != NULL) { 
        printf(" %d ", nod->data); 
        last = nod; 
        nod = nod->next; 
    }
    cout<<endl; 
  
    printf("printing in reverse direction \n"); 
    while (last != NULL) { 
        printf(" %d ", last->data); 
        last = last->prev; 
    } 
   cout<<endl;
} 
  
int main() 
{ 
    node* head = NULL; 
    cout<<"Enter the first number";
    int n,n1,n2,n3,a;
    cin>>n;
    append(&head,n);
    do{
	 cout<<"Enter the number of the selected number \n";
	 cout<<"1.Add the number at beginning\n";
	 cout<<"2.Insert a number\n";
	 cout<<"3.Insert a number in last\n";
	 cout<<"4.Print the list\n";
	 cout<<"0.Exit\n";
	 cin>>a;
	 switch(a)
	 {
		 case 1:
		 cout<<"Enter the number... \n";
		 cin>>n1;
		 append(&head,n1);
		 break;
		 case 2:
		 cout<<"Enter the number... \n";
		 cin>>n2;
		 push(&head,n2);
		 break;
		 case 3:
		 cout<<"Enter the number... \n";
		 cin>>n3;
		 insert(head->next,n3);
		 break;
		 case 4:
		 print(head);
		 break; 
	 }
 }
 while(a!=0);
    
  }

 //problem no 13
#include<iostream> 
using namespace std; 
#define MAX 1000000   
int mul(int x,int res[],int size) 
{ 
    int carry = 0;
    for(int i=0;i<size;i++) 
    { 
        int r=res[i]*x+carry; 
        res[i]=r%10;   
        carry=r/10;     
    } 
    while (carry) 
    { 
        res[size] = carry%10; 
        carry = carry/10; 
        size++; 
    } 
    return size; 
} 
void fact(int n) 
{ 
    int res[MAX]; 
    res[0]=1; 
    int size=1; 
    for (int x=2;x<=n;x++) 
        size=mul(x,res,size); 
  
    cout << "Factorial of given number is \n"; 
    for (int i=size-1;i>=0;i--) 
        cout << res[i]; 
} 
int main() 
{ 
    fact(100); 
   } 

//problem no 14
#include<stdio.h> 
int fib(int n) 
{ 
int f[n+2]; 
int i; 
f[0]=0; 
f[1]=1; 
for(i=2;i<=n;i++) 
{ 
	f[i]=f[i-1]+f[i-2]; 
} 
return f[n]; 
} 

int main () 
{ 
int n;
scanf("%d",&n); 
printf("%d",fib(n)); 
} 

//problem no 15
#include <stdio.h> 
int gcd(int a, int b) 
{ 
    if(a==b) 
        return a; 
    else if(a>b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 
int main() 
{ 
    int a,b;
    scanf("%d%d",&a,&b); 
    printf("LCM of %d and %d is %d ",a,b,(a*b)/gcd(a,b)); 
} 
