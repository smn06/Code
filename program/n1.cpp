#include<bits/stdc++.h>
typedef struct Node node;
node *head;
struct Node{
	int data;
	node *next;
};
node *create(int i,node *next)
{
	node *create=(node *)(malloc(sizeof(node)));
	
	if(create==NULL)
	{
		printf("cant create a node");
		exit(1);
	}
	create->data=i;
	create->next=next;
	return create;
}
node *pre(int i,node *head)
{
	node *pre =create(i,head);
	return pre;
}
node *app(int i,node *head)
{
	
	node *app=create(i,NULL);
	if(head==NULL)
	 return app;
	 node *current=head;
	 while(current->next!=NULL)
		 current=current->next;
		    
	current->next=app;
	return head;
	  
}
void print(node *head)
{
	node *cur=head;
	while(cur!=NULL)
	{
		printf("%d",cur->data);
		cur=cur->next;
	}
    printf("\n");
}
node *rem(node *head,node *nod)
{
	if(nod==head)
	{
		head=nod->next;
	free(nod);
	return head;
	}
	node *cur=head;
	while(cur!=NULL)	
	{
		if(cur->next==nod)
		break;
		cur=cur->next;
	}
	if(cur==NULL)
	return head;
    
    cur->next=nod->next;
    free(nod);
    return head;
}
void insert(int i,node *nod)
{
	node *in=create(i,nod->next);
	nod->next=in;
}
int main()
{
	node *a,*b,*head,*c;	
   a=create(10,NULL);
   printf("%d",*a);
   head=a;
   print(head);
   b=pre(20,head);
   head=b;
   print(head); 
   c=app(4,head);  
   head=c;
   print(head);  
   head=rem(head,b);
   print(head);
}
	
