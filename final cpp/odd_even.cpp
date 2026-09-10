#include<stdio.h>
int main(){
	
	int start;
	int end;
	int even=0;
	int odd=0;
	printf("enter lover limit\n");
	scanf("%d",&start);
	printf("enter upper end");
	scanf("%d",&end);
	while(start<=end){
		if(start%2==0){
			even=even+start;
		}
		else{
			odd=odd+start;
		}
		start++;
	}
	
	printf("sum of even numbers are  %d\n",even);
	printf("sum of odd numbers are %d",odd);
	
	
	
	
	
	
	
	
	
	return 0;
}
