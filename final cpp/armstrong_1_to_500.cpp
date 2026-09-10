#include<stdio.h>
#include<math.h>
int main(){
	int num=1;
	
	while(num<=500){
int count=0;
	int dn=num;
	while(dn>0){
			dn/=10;
		count++;
	
	}
	dn=num;
		int sum=0;
	while(dn>0){
		int digit=dn%10;
		sum=sum+pow(digit,count);
			dn/=10;
		
	}
	if(sum==num){
		printf("%d.",num);
	}

	num++;
}

		return 0;
}
