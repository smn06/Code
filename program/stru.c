#include<stdio.h>
#include<string.h>
typedef struct{
	char first[20],last[20];
}nametype;
typedef struct{
	int id;
	nametype name;
	char grade[4];
}studenttype;
void gradee(studenttype *s,int mark){
	if(mark>=80 && mark<=100){
		strcpy(s->grade,"A+");}
	else if(mark>=70 && mark<=79){
		strcpy(s->grade,"A");}
	else if(mark>=60 && mark<=69){
		strcpy(s->grade,"A-");}
	else if(mark<=50 && mark<=59){
		strcpy(s->grade,"B");}
	else if(mark<=40 && mark<=49){
		strcpy(s->grade,"C");}
		else
		strcpy(s->grade,"F");} 
	int main(){	
studenttype student[5];
  int i,marks[]={20,50,70};
  for( i=0;i<5;i++){
	  printf("Enter the id for student %d\n",i+1);
	  scanf("%d",&student[i].id);
	  printf("Enter the first name for student %d\n",i+1);
	  scanf("%s",student[i].name.first);
  	  printf("Enter the second name for student %d\n",i+1);
      scanf("%s",student[i].name.last);
      strcpy(student[i].grade,"");
      printf("\n");
  }
  for(i=0;i<5;i++)
  gradee(&student[i],marks[i]);
  for(i=0;i<5;i++){
	  printf("ID=%d\n",student[i].id);
	  printf("%s %s\n",student[i].name.first,student[i].name.last);
	  printf("Grade is %s\n",student[i].grade);
  }
  return 0;
}
	  
