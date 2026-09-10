#include<stdio.h>
int main(){
	
	int ll;
	int ul;
	printf("enter upper limit\n");
	scanf("%d",&ll);
	printf("enter upper limit\n");
	scanf("%d",&ul);
	while(ll<=ul){
		int num=ll;
		int count=0;
		int r=1;
		while(r<=num){
			if(num%r==0){
				count++;
			}
			r++;
		}
		if(count==2){
			printf("%d,",num);
		}
		
		
		
		
		
		
		
		ll++;
	}
}
