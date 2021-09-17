/*problem no 1
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d is Even\n",n);
	}
	else
	{
		printf("%d is ODD\n",n);
	}
	return 0;
}
*/
/*problem no 2
 #include<stdio.h>
 int main()
 {
	 int a,b,c;
	 printf("Enter three numbers \n");
	 scanf("%d %d %d",&a,&b,&c);
	 if(a>b)
	 {
		 if(a>c)
		 printf("%d is the largest number",a);
		 else
		 printf("%d is the largest number",c);
	 }
	 else
	 {
		 if(b>c)
		 printf("%d is the largest number",b);
		 else
		 printf("%d is the largest number",c);
	 }
	 return 0;
 }
*/		  
/*problem no 3
 #include<stdio.h>
 int main()
 {
 int year;
 printf("Enter the Year\n");
 scanf("%d",&year);
 if(year%400==0 || (year%100!=0 && year%4==0))
 
	 printf("%d is a leap year",year);
else
printf("%d is not a leap year",year);
return 0;
}
*/	  
/*problem no 4
#include <stdio.h>

int main()
{
    double gross,hours,rate,net,tax;
    scanf("%lf %lf",&hours,&rate);
    gross=hours*rate;
    tax=gross*0.05;
    if(gross>5000){
        net=gross - tax;
        printf("%.02lf %.02lf\n",gross,net);
    }
    else{
            tax=0;
        net=gross-tax;
        printf("%.02lf %.02lf\n",gross,net);

    }
    return 0;
}
*/
/* problem no 5
#include<stdio.h>

int main()
{
    int marks;
    scanf("%d",&marks);
        if(marks>=80 && marks<=100){
            printf("A");
        }
        else if(marks>=65 && marks<=79){
            printf("B");
        }
        else if(marks>=50 && marks<=64){
            printf("C");
        }
        else if(marks>=40 && marks<=49){
            printf("D");
        }
        else if(marks>=00 && marks<=39){
            printf("F");
        }
    return 0;
}
*/
/*problem no 6

#include <stdio.h>

int main()
{
    char name[10];
    double units,energy,charges;
    scanf("%lf",&units);
    scanf("%s",name);
    if(units >= 0 && units <=100){
        energy=units*1.75;
    }
    else if(units>100 && units<=300){
        energy=(100*1.75) + (units-100)*2.25;
    }
    else if(units>300){
        energy=(100*1.75) + 200*2.25 + (units-300)*3.50;
    }
    if(energy<=100)
    {
        charges=100;
        printf("%s %lf",name,charges);
}
    else if(energy>100 && energy<=1000){
        charges=energy;
        printf("%s %lf",name,charges);
    }
    else if(energy>1000){
        charges=energy+(energy*0.15);
        printf("%s %lf",name,charges);
    }
    return 0;

}
*/
/* problem no 7
#include<stdio.h>

int main()
{
    char play1,play2;
    scanf("%c %c",&play1,&play2);
    if((play1=='R' || play1=='r') && (play2=='R'|| play2=='r')){
        printf("Tie");
    }
    else if((play1=='P' || play1=='p') && (play2=='P'|| play2=='p')){
            printf("Tie");
    }
    else if((play1=='S' || play1=='s') && (play2=='S'||play2=='s')){
        printf("Tie");
    }
    else if((play1=='S' || play2=='s') && (play2=='p'||play2=='P')){
        printf("player 1 win");
    }
    else if((play1=='p' || play2=='P') && (play2=='s'||play2=='S')){
        printf("player 2 win");
    }
    else if((play1=='r' || play2=='R') && (play2=='s'||play2=='S')){
        printf("player 1 win");
    }
    else if((play1=='s' || play2=='S') && (play2=='r'||play2=='R')){
        printf("player 2 win");
    }
    else if((play1=='p' || play2=='P') && (play2=='r'||play2=='R')){
        printf("player 1 win");
    }
    else if((play1=='r' || play2=='R') && (play2=='p'||play2=='P')){
        printf("player 2 win");
    }
    return 0;
}
*/
/* problem no 8
 #include<stdio.h>
 int main()
 {
	 char ch;
	 scanf("%c",&ch);
	 switch(ch)
	 {
		 case 'a':
		 case 'A':
		 case 'e':
		 case 'E':
		 case 'i':
		 case 'I':
		 case 'o':
		 case 'O':
		 case 'u':
		 case 'U':
 printf("%c is vowel\n",ch);
 break;
  default:
 printf("%c is consonant\n",ch);
   }
return 0;
}
*/
/*problem no 9
#include <stdio.h>

int main()
{
    int date,month,year;
    scanf("%d %d %d",&date,&month,&year);
    switch(month)
    {
    case 1:
        printf("January ");
        break;
    case 2:
        printf("February ");
        break;
    case 3:
        printf("March ");
        break;
    case 4:
        printf("April ");
        break;
    case 5:
        printf("May ");
        break;
    case 6:
        printf("June ");
        break;
    case 7:
        printf("July ");
        break;
    case 8:
        printf("August ");
        break;
    case 9:
        printf("September ");
        break;
    case 10:
        printf("October ");
        break;
    case 11:
        printf("November ");
        break;
    case 12:
        printf("December ");
         break;
        }
        switch(date)
        {
        case 1:
        case 21:
        case 31:
            printf("%dst,%d",date,year);
            break;
        case 2:
        case 22:
            printf("%dnd,%d",date,year);
            break;
        case 3:
        case 23:
            printf("%drd,%d",date,year);
            break;
        default:
            printf("%dth,%d",date,year);
            break;
        }
        return 0;
}
*/
/* problem no 10
#include<stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
    printf("he lower case letter is %c\n",tolower(ch));
    }
    else if(ch>='a' && ch<='z'){
        printf("The upper case letter is %c\n",toupper(ch));
    }
    return 0;
}
*/
