#include<stdio.h>
int main(){
	int num,sum=0,original;
	printf("enter a number to check for armstrong\n");
	scanf("%d",&num);
	original=num;
	while(num>0){
		int digit=num%10;
		sum=sum +(digit*digit*digit);
		num/=10;
	}
	if(sum==original){
		printf("armstrong number\n");
	}
	else{
		printf("not an armstrong number");
	}
	
	
	
	
	
	return 0;
}
