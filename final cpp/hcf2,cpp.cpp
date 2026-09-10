#include<stdio.h>
int main(){
	
	int n1,n2,hcf,r;
	printf("enter value of a\n");
	scanf("%d",&n1);
	printf("enter n2\n");
	scanf("%d",&n2);
	r=n1;
	while(r>0){
		if(n1%r==0 && n2%r==0){
			printf("%d is hcf",r);
			break;
		}
		r--;
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
