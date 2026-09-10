#include<stdio.h>
int main(){
	int n1,n2;
	int i=1;
	int hcf;
	printf("enter num1\n");
	scanf("%d",&n1);
	
	printf("enter n2\n");
	scanf("%d",&n2);
	while(i<=n1 && i<=n2){
		if(n1%i==0 && n2%i==0){
			hcf=i;
		}
		i++;
	}
	
	printf("hcf=%d",hcf);
		
	
	return 0;
}
