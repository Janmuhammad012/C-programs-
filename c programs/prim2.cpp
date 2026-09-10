#include<stdio.h>
int main(){
	int num=1;
    while(num<=100){
    	int c=1;
    	int count=0;
    while(c<=num){
    		if(num%c==0){
    		count++;
		}
		c++;
	}
	if(count==2){
		printf("%d.",num);
		
	}
	num++;
	}
	
	
	
	
	
	return 0;
}
