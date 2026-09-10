#include<stdio.h>
int factorial(int);
int main(){
	int fact;
	int num;
	printf("enter a number to find factorial of that numbr\n");
	scanf("%d",&num);
	
 fact=factorial(num);
	
	printf("factorial = %d",fact);
	
	
	
	return 0;
}
int fact=1;
int factorial(int n){
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}
