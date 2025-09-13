#include<stdio.h>
int main(){
   float temp;
   printf("enter the temperature(in Celsius):");
   scanf("%f",&temp);
   if(temp>30){
   	printf("Hot Day.");
   }
   else{
   	printf("Pleasant Day.");
   }
   return 0;
}
