#include<stdio.h>
#include<string.h>
int main()
{
int i,a,cas,c,j;
scanf("%d",&cas);
for(i=1;i<=cas;i++)
{
scanf("%d",&c);
for(int k=1;k<=c;k++)
{
int s[c];
scanf("%d",&s[c]);
for(int s[j]=0;j<strlen(s);j++)
{
if(s[j+1]>s[j])
{
printf("allGoodDays");
}
else if(s[j+1]<s[j])
{
printf("allBadDays");
}
else if(s[j+1]==s[j])
{
printf("none");
}

}}}

return 0;
}

