#include<stdio.h>
void swap(int*,int*);
int main(){
	
	int a=20;
	int b=30;
	printf("befor swiping a=%d b=%d\n",a,b);
	  
	
	swap(&a,&b);
	
	printf("after swiping a=%d b=%d",a,b);
	
	
	
	
	return 0;
}

void swap(int *a,int *b){
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
	
	
	
	
}
