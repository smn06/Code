#include<stdio.h>
#include<math.h>
int main() {
     int a,b,c;

    while(scanf("%d", &a) != EOF)
     {
        if(a<2)
             c=a,b=0;
        else if(a<=5)
             c=2,b=0;
         else if(a<=7)
           b=a-5,c=2;
           else
        {
           if(a%7<2)
           {
               b=a/7*2;
                c=a/7*2+a%7;
            }
          else if(a%7<=5)
          {
               b=a/7*2;
         }
           else if(a%7<7)
            {
               b=a/7*2+a%7-5;
               c=a/7*2+2;
            }
         }
       printf("%d %d\n",b,c);
   }
    return 0;
}
