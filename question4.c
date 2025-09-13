#include<stdio.h>
int main(){
	int age;
	float salary;
	printf("enter your age:");
	scanf("%d", &age);
	printf("enter your salary:");
	scanf("%f",&salary);
	if(age>=25 && salary>=40000){
		printf("your loan is approved!");}
	else{
		printf("your is rejected!");
	}
	return 0;
}
