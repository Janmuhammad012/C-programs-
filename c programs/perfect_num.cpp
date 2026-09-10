#include<stdio.h>
int main(){
	
	int num;
	int sum;

	int e=1;
	while(e<=500){
			sum=0;
		num=e;
	
//	printf("enter a number to check for perfect\n");
//	scanf("%d",&num);
int r=1;
	while(r<num){
		if(num%r==0){
			 sum=sum+r;
		}
		r++;
	}

	

	if(sum==num){
		printf("%d.",num);
	}
	
	
	e++;	
	
}
	
	return 0;
}
