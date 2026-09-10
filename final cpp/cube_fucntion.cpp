#include<stdio.h>
int cube(int);
int main(){
	int num;
	printf("enter a number to find cube of that number\n");
	scanf("%d",&num);
	
	int res=cube(num);
	
	
	printf("cube of %d= %d",num,res);
	
	
	
	return 0;
}

int cube(int num){
	int res=1;
	for(int r=1;r<=3;r++){
		
		res=res*num;
	}
	return res;
	
	
	
	
}
