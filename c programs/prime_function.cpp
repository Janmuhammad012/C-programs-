#include<stdio.h>
void prime(int);
int main(){
	int num;
	int y=30;
	printf("enter a numbet to check for prime\n");
	scanf("%d",&num);
	prime(num);
	prime(60);
	prime(71);
	prime(y);
	return 0;
}

void prime(int dn){
	int count=0;
	
	for(int i=1;i<=dn;i++){

	if(dn%i==0){
		count++;
	}
	}
	if(count==2){
		printf("%d is prime\n",dn);
	}
	else{
		printf("%d is not prime\n",dn);
	}
}
