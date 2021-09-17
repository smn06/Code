#include<stdio.h>
#include<stdlib.h>
int main() {
    int arr[9],i,j;
    while(scanf("%d",&arr[8])==1) {
        for(i=7;i>=0;i--)
            scanf("%d",&arr[i]);
        j=8;
        while(!arr[j] && j>=0)    j--;
        int flag=0;
        if(j==-1)
            putchar('0');
        for(i = j;i>=0;i--) {
            if(arr[i]){
                if(flag) {
                    putchar(' ');
                    if(arr[i]>0)
                        putchar('+');
                    else
                        putchar('-');
                    putchar(' ');
                } else{
                    if(arr[i]<0)
                        putchar('-');
                    flag=1;
                }
                if(i){
                    if(abs(arr[i])!=1)
                        printf("%d",abs(arr[i]));
                    putchar('x');
                    if(i!=1)
                        printf("^%d",i);
                }
                else {
                    printf("%d",abs(arr[i]));
                }
            }
        }
        puts("");
    }
}