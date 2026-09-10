#include<stdio.h>
void fact(int*,int*);
int main(){
	
	int num;
	int res=1;
	printf("enter number to find factorial\n");
	scanf("%d",&num);
	
	fact(&num,&res);
	printf("factorial=%d",res);
	
	return 0;
}

void fact(int *num,int *res){

	for(int i=1;i<=*num;i++){
		*res=*res*i;
	}
	
	
}
