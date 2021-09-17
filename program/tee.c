#include<stdio.h>
int main()
{
	int c1,c,a,b,c2;
	
	while(1)
	{
		printf("\nPlease enter those fuckinf numm");
		scanf("%d %d",&a,&b);
		c=a&b;
		c1=a&&b;
		c2=a|b;
	printf("\n c= %d c1=%d c2=%d",c,c1,c2);
}
		
	return 0;
}
