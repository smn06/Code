
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

const int maxn=2*1e5+5;

long long int a[maxn],b[maxn],n,m,ans[maxn];

int part(int sta,int end,int pos)
{
    if(pos>=a[n]) return n;
    if(pos<a[1]) return 0;
    long long int mid=(sta+end)/2;
    if(a[mid-1]<=pos&&a[mid]>pos)
    {
        return mid-1;
    }
    if(a[mid+1]>pos&&a[mid]<=pos)
    {
        return mid;
    }
    if(a[mid]>pos)
    {
        end=mid;
        return part(sta,end,pos);
    }
    else if(a[mid]<=pos)
    {
        sta=mid;
        return part(sta,end,pos);
    }

}

int main()
{
    while(~scanf("%lld %lld",&n,&m))
    {
        for(int i=1;i<=n;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(int i=1;i<=m;i++)
        {
            scanf("%lld",&b[i]);
        }
        sort(a+1,a+1+n);
        for(int i=1;i<=m;i++)
        {
            ans[i]=part(1,n,b[i]);
        }
        for(int i=1;i<=m;i++)
        {
            if(i==1) printf("%lld",ans[i]);
            else printf(" %lld",ans[i]);
        }
        printf("\n");
    }
    return 0;
}

