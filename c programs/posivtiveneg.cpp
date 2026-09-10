#include<stdio.h>
int check(int num);
int main(){
	
	int num;
	printf("enter numb\n");
	scanf("%d",&num);
int res=check(num);
	if(res==1){
		printf("%d is positive",num);
	}
	if(res==-1){
		printf("%d is negative",num);
	}
	if(num==0){
		printf("%d is 0 which neither positive not negative",num);
	}
	
	
	
	return 0;
}
int check(int num){
	if(num>0){
		return 1;
	}
	if(num<0){
		return -1;
	}
	if(num==0){
		return 0;
	}
}
