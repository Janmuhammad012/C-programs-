#include<stdio.h>
int main(){
	int r=1;
	int rows;
	printf("enter rows\n");
	scanf("%d",&rows);
	int star=1;
	while(r<=rows){
		int c=1;
		while(c<=star){
			printf("*");
			c++;
		}
		printf("\n");
		r<=rows/2?star++:star--;
		
		r++;
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
