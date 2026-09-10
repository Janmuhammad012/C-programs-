#include<stdio.h>
int main(){
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	int origial=num;
	while(num>0){
		int fact=1;
		int i=1;
		int digit=num%10;
		while(i<=digit){
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		num/=10;
	}
	if(original==sum){
		printf("strong number\n");
	}
	
	
	
	
	
	
	
	
	return 0;
}
