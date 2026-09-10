#include<stdio.h>
void fact(int,int*);
int main(){
	int fact1;
	int num;
	printf("enter number to find factorial\n");
	scanf("%d",&num);
	fact(num,&fact1);
	printf("factorial=%d",fact1);
	
	
	return 0;
}
void fact(int num,int *fact1){
	*fact1=1;
	for(int i=1;i<=num;i++){
		*fact1=*fact1*i;
		
	}
	
}
