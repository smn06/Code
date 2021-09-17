#include<bits/stdc++.h>
int main()
{
	int a[4],c=0,t,i,j;
    while(c<4)
     {scanf("%d",&a[c++]);
    }
   for(int i=0;i<4;i++)
   {
	   for(j=i+1;j<4;j++)
	   {
		   if(a[i]<a[j])
		   {
			   t=a[j];
			   a[j]=a[i];
			   a[i]=t;
		   }
	   }
   }
   printf("\n \n");
 c=0;
 while(c<4)
 {  printf("%d\n",a[c++]);
    
}
   
}
