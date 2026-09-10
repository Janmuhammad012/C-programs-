#include<stdio.h>
void check(int,int*);
int main(){
	int num;
	int res;
	printf("enter a number\n");
	scanf("%d",&num);
	check(num,&res);
	if(res==1){
		printf("%d is positive",num);
	}
	
	
	return 0;
}
void check(int num,int *num1){
	if(num>0){
		*num1=1;
	}
	
	
	
}
