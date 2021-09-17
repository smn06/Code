#include<stdio.h>
#include<math.h>
#define eps 1e-7

int main() {
    int n;
    while(scanf("%d",&n)==1 && n) {
        int m=2*n,i,j,k,ch;
        double arr[n][m],tmp,c;
        for(i=0;i<n;i++) {
            for(j=0;j<n;j++)
                scanf("%lf",&arr[i][j]);
            for(j=n;j<m;j++)
                arr[i][j]=0;
            arr[i][i+n]=1;
        }
        for(i=0;i<n;i++) {
            if(fabs(arr[i][i])<eps) break;
            for(j=0;j<n;j++) {
                if(i==j) continue;
                c=arr[j][i]/arr[i][i];
                for(k=i;k<m;k++)
                    arr[j][k]=arr[j][k]-arr[i][k]*c;
            }
        }
        if(i!=n) {
            puts("Not possible\n");
            continue;
        }
        for(i=0;i<n;i++,puts("")) {
            for(j=n;j<m;j++) {
                if(j!=n)  putchar(' ');
                printf("%.6lf",arr[i][j]/arr[i][i]);
            }
        }
        puts("");
    }
}