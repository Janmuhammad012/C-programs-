#include<stdio.h>
#include<math.h>
int main(){
	int num;
	int count=0;
	int sum=0;
	int dn;
	printf("enter a number to check for armstrong\n");
	scanf("%d",&num);
	dn=num;
	for( ;dn>0;dn/=10){
		count++;
	}
	dn=num;
	for( ;dn>0;dn/=10){
		int digit=dn%10;
		sum=sum+pow(digit,count);
	}
	if(sum==num){
		printf("the num is armstrong");
	}
	else{
		printf("the num is not armstrong");
	}
	
	return 0;
}
