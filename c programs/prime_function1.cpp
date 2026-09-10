#include<stdio.h>
void prime(int);
int main(){
	int n1=7;
	
	prime(n1);
	prime(5);
	prime(11);
	
	
	return 0;
}
void prime(int n1){
	int count=0;
	for(int i=1;i<=n1;i++){
		if(n1%i==0){
			count++;
		}
		if(count==2){
			printf("%d is prime\n",n1);
		}
	}
	
	
	
}
