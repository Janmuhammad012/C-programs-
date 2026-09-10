#include<stdio.h>
int main(){
	
	int num1,num2;
	int hcf;
	printf("enter a number\n");
	scanf("%d",&num1);
	printf("enter num2\n");
	scanf("%d",&num2);
	
	int r=1;
	for( ;r<=num1&&r<=num2;r++){
		if(num1%r==0 && num2%r==0){
			hcf=r;
		}
	}
	printf("%d is hcf",hcf);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
