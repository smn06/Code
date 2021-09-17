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
//return it to the head;
node *pre(int i,node *head)
{
	node *n=create(i,head);
	return n;
}

node *app(int i,node *head)
{
node *n=create(i,NULL);
if(head==NULL)
{
	return n;
	//if it happens,return the value to the head;
}	
node *current=head;
while(current->next!=NULL)
    current=current->next;
 current->next=n;
 return head;
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
void *sort(node *ab)
{
	int temp,count;
	node *n,*head=NULL;
	if(ab==NULL) return 0;
	do{
		count=0;
		n=ab;
		while(n->next!=head)
		{
			if(n->a>n->next->a)
			{
				temp=n->a;
				n->a=n->next->a;
				n->next->a=temp;
				count=1;
			}
			n=n->next;
		}
		head=n;
	}
	while(count);
	return 0; 
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
		
  printf("            ********---MenU---********            \n");
  printf("		Press the Number for the selected operation\n");
  printf("       1-> Prepend The List \n");
  printf("       2-> Append The List \n");
  printf("       3-> Search The List  \n");
  printf("       4-> Remove a index from The List \n");
  printf("       5-> Sort The List \n");
  printf("       6-> Print The List \n");   
  printf("       0-> Exit from the terminal\n");
	while(EOF!=0){
	int n;
	scanf("%d",&n);
	if(n==1)
	{
	printf("Enter the number you want to prepend\n");
	int p;
	scanf("%d",&p);
	head=pre(p,head);
	printf("After prepending the list will be........\n");	
	print(head);	
	}
	else if(n==2)
	{
	 printf("Enter the number you want to append\n");
	int ap;
	scanf("%d",&ap);
	app(ap,head);
	printf("After prepending the list will be........\n");	
	print(head);	
	}
   else if(n==3)
   {
	 printf("Enter the value you want to search\n");
	 int s;
	 scanf("%d",&s);
	 search(s,arr,am);
   }
   else if(n==4)
   {
	  printf("Enter the value you wants to remove\n");
	  int r;
	  scanf("%d",&r);
	  remove(&head,r);
	  printf("After removing the list wil be.....\n");
	  print(head);
   }
   else if(n==5)
   {
	   printf("Before Sorting\n");
	   print(head);
	   sort(head);
	   printf("After Sorting\n");
	   print(head);
   }
   else if(n==6)
   {
	   printf("Now printed linked listed are...\n");
      print(head);
   }
   else
       exit(1);
 }
}
	
