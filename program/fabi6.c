#include <stdio.h>

int main()
{
    int unit;
    float amount,amou;
    printf("Enter total units consumed: ");
    scanf("%d", &unit);


    if(unit <= 100)
    {
        amount = unit * 1.75;
    }
    else if(unit<=101 && unit <= 300)
    {
        amount = 175 + ((unit-200)  * 2.25);
    }
    
    else if(unit>=301)
    {
        amount = 625 + ((unit-300) * 3.50);
    }     
if(amount>1000)
{
 amou=amount*0.15;
    printf("Electricity Bill = %.2f taka",amou);
}
else
    printf("Electricity Bill = %.2f taka",amount);

    return 0;
}
