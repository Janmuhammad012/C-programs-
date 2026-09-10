#include<stdio.h>
int revers(int);
int main(){
	
	int num;
	printf("enter a number to reverser\n");
	scanf("%d",&num);
	int result=revers(num);
	printf("reverse of %d is %d",num,result);
	
	
	
	return 0;
}

int revers(int num){
	int reverse=0;
	while(num>0){
		int digit=num%10;
		reverse=reverse*10+digit;
		num/=10;
	}
	return reverse;
}
