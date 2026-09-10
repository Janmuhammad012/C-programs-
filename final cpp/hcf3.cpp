#include<stdio.h>
int main(){
	int n1,n2,r=1,hcf;
	printf("enter n1 and n2\n");
	scanf("%d%d",&n1,&n2);
	while(r<=n1 && r<=n2){
		if(n1%r==0 && n2%r==0){
			hcf=r;
		}
		r++;
	}
	printf("%d is hcf",hcf);
	
	
	
	
	return 0;
}
