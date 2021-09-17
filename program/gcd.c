
#include<stdio.h>

int main()
{
long int fuckashik;
long long int a,b,fuckagain,fuckhard,r;
scanf("%ld",&fuckashik);
for(int i=1;i<=fuckashik;i++)
{
scanf("%lld %lld",&fuckagain,&fuckhard);
a=fuckagain;
b=fuckhard;
while(fuckhard>0)
        {
       r=fuckagain%fuckhard;
       fuckagain=fuckhard;
       fuckhard=r;
        }


}
printf("%lld %lld",fuckagain,(a*b)/fuckagain);
return 0;
}
