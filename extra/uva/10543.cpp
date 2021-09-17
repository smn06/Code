#include<stdio.h>
#include<cstring>
int main(){
    int N,M,K,from,to;
    bool adj[50][50];
    bool arr[50][20];
    while(scanf("%d %d %d",&N,&M,&K)==3&&N){
        memset(adj,false,sizeof(adj));
        for( int i=0;i<M;i++){
            scanf("%d %d",&from,&to);
            adj[from][to]=true;
        }
        arr[0][0]=true;
        for(int i=1;i<N;i++ ) arr[i][0]=false;
        for(int h=1;h<20;h++){
            for(int i=0;i<N;i++){
                arr[i][h]=false;
                for(int pre=0;pre<N;pre++){
                    if(pre==i) continue;
                    if(arr[pre][h-1] && adj[pre][i]){
                        arr[i][h]=true;
                        break;
                    }
                }
            }
        }
        int k;
        for(k=K-1;k<20;k++){
            if(arr[N-1][k]) break;
        }
        if(k<20) printf("%d\n",k+1);
        else printf("LOSER\n");
    }

}