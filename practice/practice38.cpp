#include<bits/stdc++.h>
int main()
{
	int *p,*x[4][5],i,j;//={11,22,33,44};
	//p=*(x+3);
	for(i=0;i<4;i++){
		for( j=0;j<5;j++)
	scanf("%d",(x+i)+j);
	}
	for(int i=0;i<4;i++){
		for( j=0;j<5;j++)
	printf("initial value of p=%d\n",*(x[i]+j));
	printf("\n");}
	/*
	for(;p<x+4;p++)
	printf("p=%d x=%d ++(*p)=%d (++*p)=%d\n",*p,*x,++(*p),++*p);
*/}
