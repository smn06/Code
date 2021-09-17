#include <cstdio>
#include <vector>
#include <utility>
using namespace std;
int main()
{
    vector<pair<int,int>>val(100001);
    vector<bool>isPrime(18409202, true);
    int pos=1;
    int prev=0;
    
    for(long long i=3;pos<=100000;i+=2)
    {
        if (isPrime[i])
        {
            for(long long j=i*i;j<18409202;j+=i)
            {
                isPrime[j]=false;
            }            
            if(i==prev+2)
            {
                val[pos].first = prev;
                val[pos].second = i;
                ++pos;                
            }           
            prev=i;
        }        
    }
    int num;
    while(scanf("%d",&num)==1)
    {
        printf("(%d, %d)\n",val[num].first,val[num].second);
    }
}