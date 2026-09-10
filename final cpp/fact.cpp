#include<stdio.h>
int main(){
	
	int num,fact=1;
	printf("enter a number\n");
	scanf("%d",&num);
	
	jan:
	fact=fact*num;
	num--;
	if(num>=1){
		goto jan;
	}
	
	printf("factorial = %d,",fact);
	
	
	
	
	
	
	return 0;
}
