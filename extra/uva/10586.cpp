#include <cstdio>
const int MAX=10000;
int coeff[MAX+1];
int main()
{
    while(true){
    int n,k;
    scanf("%d %d",&n,&k);
    if(n==-1)
        break;
    for(int i=0;i<=n;i++)
        scanf("%d",&coeff[i]);
    for (int i=n-k,j=n;i>=0;i--,j--)
        if(coeff[j]) {
            coeff[i]-=coeff[j];
            coeff[j]=0;
                        }
    int i;
    for(i=k-1;i>=0;i--)
    if(coeff[i])
        break;
    if(i>=0) {
    for(int j=0;j<=i;j++) {
        printf("%d%c", coeff[j],((j<i)?' ':'\n'));
        coeff[j]=0;
        }
    }
    else
        puts("0");
    }
}