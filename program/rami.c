//print the string in one line
/*
#include<stdio.h>
int main()
{
	char text[80];
	printf("enter the string...\n");
	scanf("%s",text);
    printf("Print the string in one line..\n");
    printf("%s\n",text);
    return 0;
}

//print the first 8 character

#include<stdio.h>
int main()
{
	char text[80];
	printf("enter the string...\n");
	scanf("%s",text);
    printf("Print the string in one line..\n");
    printf("%.8s\n",text);
    return 0;
}


//print the first 8 character preceding 5 space

#include<stdio.h>
int main()
{
	char text[80],c=' ';
	printf("enter the string...\n");
	scanf("%s",text);
    printf("Print the string in one line..\n");
    printf("%c%c%c%c%c%.8s\n",c,c,c,c,c,text);
    return 0;
}
*/
//print the first 8 character followed by 5 space
#include<stdio.h>
int main()
{
	char text[80],c=' ';
	printf("enter the string...\n");
	scanf("%[^\n]",text);
    printf("Print the string in one line..\n");
    printf("%.8s%c%c%c%c%c\n",text,c,c,c,c,c);
    return 0;
}
