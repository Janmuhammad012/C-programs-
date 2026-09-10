#include<stdio.h>
void compute(int,int*,int*);
int main(){
	int num;
	int reverse=0;
	int count=0;
	printf("enter number\n");
	scanf("%d",&num);
	compute(num,&reverse,&count);
	printf("%d is palindrom\n",reverse);
	printf("count=%d",count);
	
	
	return 0;
}
void compute(int num,int *p1,int *p2){
	int temp=num;
	while(num>0){
		int digit=num%10;
		(*p2)++;
		*p1=*p1*10+digit;
		num/=10;
		
	}
	if(num==*p1){
		*p1=1;
	}
	
	
}
