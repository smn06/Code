#include <stdio.h>
int main()
{
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, j, temp;

    for(i=0,j=9;i<10,j<=0;i++,j--)
    {
        temp = ara[i];

        ara[i] = ara[j];

        ara[j] = temp;

}

    for(j =0; j <10; j++) {
        printf("%d\n", ara[j]);
    }

    return 0;
}
