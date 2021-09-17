#include <stdio.h>
#include <string.h>

int arr[30],arr1[30][30];
int visited[30]={},left[30];
int n,l,flag;
void dfs(int nd,int dep) {
    int i;
    if(dep==l) {
        flag=1;
        printf("(1");
        for(i=0;i<dep;i++)
            printf(",%d",left[i]);
        puts(")");
        return;
    }
    for(i=0;i<arr[nd];i++) {
        if(!visited[arr1[nd][i]]) {
            visited[arr1[nd][i]]=1;
            left[dep]=arr1[nd][i];
            dfs(arr1[nd][i],dep+1);
            visited[arr1[nd][i]]=0;
        }
    }
}
int main() {
    int i,j,x;
    int first=0;
    while(scanf("%d %d", &n,&l)==2) {
        if(first)   puts("");
        first = 1;
        memset(gt,0,sizeof(gt));
        for(i=1;i<=n;i++) {
            for(j=1;j<=n;j++) {
                scanf("%d",&x);
                if(x) {
                    arr1[i][arr[i]++]=j;
                }
            }
        }
        visited[1]=1;
        flag=0;
        dfs(1,0);
        visited[1]=0;
        if(!flag)
            printf("no length %d\n", l);
        scanf("%d", &x);
    }
}