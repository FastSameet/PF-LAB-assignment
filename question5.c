#include<stdio.h>
int main(){
	float num1, num2;
	float calc=0;
	char opr;
	printf("enter 1st number:");
	scanf("%f",&num1);
	printf("enter 2nd number:");
	scanf("%f",&num2);
	printf("enter the operation you want to perfom(+,-,*,/):");
	scanf(" %c", &opr);
	switch(opr){
		case '+':
			calc=num1+num2;
			break;
		case '-':
			calc=num1-num2;
			break;
		case'*':
			calc=num1*num2;
			break;
		case '/':
			calc=num1/num2;
			break;
		default:
		printf("enter a valid operator(+,-,*,/)");	
	}
	printf("answer is:%f",calc);
	return 0;
}
