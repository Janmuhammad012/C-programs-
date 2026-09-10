#include<stdio.h>
int main(){
	int num=2;
	while(num<=100){
		int c=2;
		int flag=0;
		while(c<num){
			if(num%c==0){
				flag=1;
				break;
			}
			c++;
		}
		
		if(flag==0){
			printf("%d.",num);
			
		}
		num++;
		
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
