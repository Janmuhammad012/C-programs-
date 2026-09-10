#include<stdio.h>
#include<math.h>
  int armst(int);
int main(){
	
	int num;
	printf("enter a number to check for armstrong\n");
	scanf("%d",&num);
	
	int r=armst(num);
	printf("%d",r);
	
	
	return 0;
}

int armst(int num){
	int dn=num;
	
int count;
while(dn>0){
	dn/=10;
	count++;
	
}
dn=num;
int sum=0;
while(dn>0){
	
	int digit=dn%=10;
	 sum=sum+pow(dn,digit);
	dn/=10;
	
}
if(sum==num){

}
	return num;
	
	
	
}
