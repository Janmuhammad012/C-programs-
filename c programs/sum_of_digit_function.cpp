#include<stdio.h>
int digitsum(int);
int main(){
	int num;
	printf("enter a number to find its digit\n");
	scanf("%d",&num);
	
	int sum=digitsum(num);
	printf("sum of digit of %d =%d",num,sum);
	
	return 0;
}

int digitsum(int dn){
	int sum=0;
     while(dn>0){
     	int digit=dn%10;
     	sum=sum+digit;
     	dn=dn/10;
	 }
	
	return sum;
	
	
}
