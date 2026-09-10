#include<stdio.h>
int main(){
	
	int num; 
	int largest;
	int smallest;
	printf("enter num\n");
	scanf("%d",&num);
			largest=num;
			smallest=num;
	int r=1;
	while(r<=9){
		printf("enter number");
		scanf("%d",&num);
	
		if(num>largest){
			largest=num;
		
		
			
		}
		 if(num<smallest){
			smallest=num;
		}
		r++;
	}
	printf("%d is largest\n",largest);
	printf("%d is smallest",smallest);
	
	
	
	
	
	
	
	return 0;
}
