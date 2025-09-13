#include<stdio.h>
int main(){
   float atd, marks;
   printf("enter your attendance:");
   scanf("%f", &atd);
   printf("enter your marks:");
   scanf("%f", &marks);
   if (atd>=75 && marks>=40){
   	printf("You can appear in the final exams!");
   }
   else{
   	printf("you cannot appear in the final exams!");
   }
   return 0;
}
