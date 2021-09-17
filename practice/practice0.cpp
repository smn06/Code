#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a<(b+c) && b<(a+c) && c<(a+b)){
printf("The Triangle is possibly exists");
if(a==b || b==c){
printf("\nThe Triangle is  Isosceles");}
else if(a==b && b==c && c==a){
printf("\nThe Triangle is  equal");}
else if(a!=b && b!=c && c!=a){
printf("\nThe Triangle is Scalene");}}
else
printf("The Triangle is possibly doesnot exists");

return 0;
}
