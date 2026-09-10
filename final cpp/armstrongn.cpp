#include<stdio.h>
#include<math.h>
int main(){
	
	int n,dc=0;
	int sum=0;
	printf("enter a number to check for armstrong\n");
	scanf("%d",&n);
	int dn=n;
	while(dn>0){
		dn=dn/10;
		dc++;
	}
	dn=n;
	while(dn>0){
		int digit=dn%10;
		sum=sum+pow(digit,dc);
		dn=dn/10;
		
	}
	if(sum==n){
		printf(" %d is an armstrong number\n",n);
	}
	else{
		printf(" %d is not an arm strong number",n);
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
