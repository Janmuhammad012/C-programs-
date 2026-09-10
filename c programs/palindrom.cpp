#include<stdio.h>
#include<math.h>
int armstrong(int);
int main(){
	
	int num;
	printf("enter num to check for armstrong \n");
	scanf("%d",&num);
	int res=armstrong(num);
	
	if(res==1){
		printf("%d is palindrome",num);
	}
	else{
		printf("%d is not palindrom",num);
	}
	
	
	
	return 0;
}
int armstrong(int num){
	int dn=num;
	int count=0;
	while(dn>0){
		dn=dn/10;
		count++;
	}
	dn=num;
	int sum=0;
	while(dn>0){
		
		int digit=dn%10;
		sum=sum+pow(digit,count);
		dn/=10;
	}
	if(sum==num){
		return 1;
	}
	else{
		return 0;
	}
}
