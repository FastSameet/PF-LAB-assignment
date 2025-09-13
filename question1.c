#include<stdio.h>
int main(){
	int billAmount;
	float FPA=0;
	printf("enter your bill amount:");
	scanf("%d",&billAmount);
	if(billAmount>5000){
		FPA=(billAmount*90)/100;
		printf("your final payable amount is %f",FPA);}
	else{
		FPA=billAmount;
		printf("your final payable amount is %f",FPA);}
		return 0;
	}
