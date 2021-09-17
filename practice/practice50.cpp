#include<stdio.h>
#include<stdlib.h>
int comp(const void *a,const void *b)
{
	return (*(int *)a-*(int*)b);
}
int main()
{
	int a,*b,val[]={0,1,2,3,5};
	while(1)
	{
		printf("thr valie");
		scanf("%d",&a);
		b=(int*)bsearch(&a,val,5,sizeof(int),comp);
		if(b!=NULL)
		{
			printf("The bloody item is founded");
		}
		else
		{
			printf("THe item is not found");
		}
	}
return 0;
}
