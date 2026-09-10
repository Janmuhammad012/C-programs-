#include<stdio.h>
int  evenodd(int);
int main(){
	int num;
	printf("enter number\n");
	scanf("%d",&num);
int res=evenodd(num);

	if(res==1){
		printf("%d is even",num);
	}
	else{
		printf("%d is odd",num);
	}
	
	
	
	return 0;
}
int evenodd(int num){
	if(num%2==0){
		return 1;
	}
	else {
		return 0;
	}
	
	
	
}
