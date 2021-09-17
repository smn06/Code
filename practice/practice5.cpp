#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *marks;
	int n;
	printf("print the number u wwnanna keep");
	scanf("%d",&n);
	marks=(int *)calloc(n,sizeof(int)*n);
	for(int i=0;i<n;i++)
	scanf("%d\n",&marks[i]);
	for(int i=0;i<n;i++)
	printf("%d \n",marks[i]);
	//printf("%d?",free(marks));
	return 0;
}
