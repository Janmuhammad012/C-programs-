#include<stdio.h>
void reverse(int ,int*);
int main(){
	
	int num;
	int res;
	printf("enter number to reverse \n");
	scanf("%d",&num);
//int res=reverse(num);
//	printf("reverse=%d",res);
	
  reverse(num,&res);
   printf("reverse=%d",res);
	return 0;
}

void reverse(int num,int *p1){
	int rev=0;
while(num>0){
		int digit=num%10;
	rev=rev*10+digit;
	num/=10;
	
}
*p1=rev;

	
}
