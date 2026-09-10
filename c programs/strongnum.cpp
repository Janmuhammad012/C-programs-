#include<stdio.h>
int main(){
	int num,sum=0,digit,original;
	int fact;
	printf("enter a number\n");
	scanf("%d",&num);
	for( ;num>0;num/=10){
		int digit=num%10;
		int i=1;
		fact=1;
		for( ;i<=digit;i++){
			fact=fact*i;
		
			
		}
		sum=sum*fact;
	}
	if(original==sum){
		printf("strong number");
	}
	
	
	
	
	
	return 0;
}
