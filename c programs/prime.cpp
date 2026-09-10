#include<stdio.h>
int main(){
	
	int num;
	int c=2;
	int flag=0;
	printf("enter a number\n");
	scanf("%d",&num);
	
	while(c<num/2){
	if(num%2==0){
		flag=1;
	}
	c++;
	}
	
	if(flag==1){
		printf("not a prime number\n");
	}
	else{
		printf("prime number");
	}
	
	return 0;
}
