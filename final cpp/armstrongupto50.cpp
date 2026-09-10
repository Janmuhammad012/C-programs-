#include<stdio.h>
#include<math.h>
int main(){
	
	int e;
	int n;
	int count=0;
	while(1){
      n=e;
	 int dc=0;
	int sum=0;

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
if(count==50){
	break;
}
	
	
	
	e++; 
		}
	
	
	
	return 0;
}
