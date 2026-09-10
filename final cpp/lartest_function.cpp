#include<stdio.h>
int larg(int,int ,int,int ,int);
int main(){
	int n1, n2,n3, n4, n5;
	printf("enter five numbers\n");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	
	int largest=larg(n1,n2,n3,n4,n5);
	
	printf("%d is largest",largest);
	return 0;
}
int larg(int n1,int n2, int n3,int n4,int n5){
	
	int max=n1;
	max=max>n2?max:n2;
	max=max>n3?max:n3;
	max=max>n4?max:n4;
	max=max>n5?max:n5;
	return max;
	
	
	
	
	
	
}
