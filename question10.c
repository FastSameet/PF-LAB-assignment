#include<stdio.h>
int main(){
  int bal,wit;
  printf("enter your balance:");
  scanf("%d",&bal);
  printf("enter withdrawal amount:");
  scanf("%d",&wit);
    if(bal>wit){
    	if( wit % 500 ==0){
    		printf("withdrawal allowed!");}
		else{
			printf("withdrawal rejected! please withdraw amount multiple of 500.");}	
	}
	else{
		printf("withdrawal rejected! insufficient balance.");
	}
   return 0;
}
