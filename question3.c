#include<stdio.h>
int main() {
 int num1=0, num2=0 , num3=0;
  printf("Enter number 1:");
    scanf("%d", &num1);
    printf("Enter number 2:");
    scanf("%d", &num2);
    printf("Enter number 3:");
    scanf("%d", &num3);
    if(num1>num2){
    	if(num1>num3){
    		printf("the largest number is:%d",num1);}
		else{
			printf("the largest number is:%d",num3);}
	}
	else {
	if(num2>num3){
		printf("the greatest number is:%d",num2);}
	else{
		printf("the greatest number is:%d",num3);}
	}
    return 0;
}
