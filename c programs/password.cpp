#include<stdio.h>
int main(){
	
	int r=1;
	int password=123;
	int try1;
	while(r<=3){
		printf("enter passoword\n");
		scanf("%d",&try1);
		if(try1==password){
			printf("correct password");
			break;
		}
		else{
			printf("wronf password\n");
			
		}
		r++;
	}
	if(r>3){
		printf("access denied");
	}
	
	
		
	return 0;
}
