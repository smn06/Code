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

