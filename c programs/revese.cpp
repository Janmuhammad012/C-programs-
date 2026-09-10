#include<stdio.h>
int reverse(int);
int main(){
	
	int num;
	printf("enter number to reverse \n");
	scanf("%d",&num);
//int res=reverse(num);
//	printf("reverse=%d",res);
	
	printf("reverse=%d",reverse(num));
	return 0;
}

int reverse(int num){
	int rev=0;
while(num>0){
		int digit=num%10;
	rev=rev*10+digit;
	num/=10;
	
}
return rev;
	
}
