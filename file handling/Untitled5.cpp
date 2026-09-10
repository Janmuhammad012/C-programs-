#include<stdio.h>
void sum(int*,int*,int*);
	

int main(){
	
	int a,b;
	int res;
	printf("enter value of a and b\n");
	scanf("%d%d",&a,&b);
	
	sum(&a,&b,&res);
	printf("sum=%d",res);
	
	
	return 0;
}

void sum(int *a,int *b,int *res){
	*res=*a+ *b;
}
