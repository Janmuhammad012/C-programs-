#include<stdio.h>
int main(){
	int num,i=1,sum=0;
	printf("enter a number\n");
	scanf("%d",&num);
	while(i<num){
		if(num%i==0){
			sum=sum+i;
			
		}
		i++;
	}
	if(sum==num){
		printf("%d is perfect number",num);
	}
	     
	 if(sum>num){
	 	printf("%d is abundant number",num);
	 }    
	  if(sum<num){
	  	printf("%d is deficient number",num);
	  }   
		
	
	return 0;
}
