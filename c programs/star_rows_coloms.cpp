#include<stdio.h>
int main(){
	int r=1;
	int rows;
	printf("enter rows\n");
	scanf("%d",&rows);
	while(r<=rows){
		int c=1;
		while(c<=rows){
			if( r=1){
				printf("*");
	
			}
			else{
				printf(" ");
			}
			c++;
		
			
		}
			printf("\n");
		r++;
		
	}
	
		
	return 0;
}
