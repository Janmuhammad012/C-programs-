#include<stdio.h>
int main(){
	int r=1;
	int rows,col;
	printf("enter total numbero of rows\n");
	scanf("%d",&rows);

	while(r<=rows){
		int c=1;
		while(c<=r){
			printf("*");
			c++;
		}
		printf("\n");
		r++;
	}
	
	
	
	
	
	
	
	return 0;
}
