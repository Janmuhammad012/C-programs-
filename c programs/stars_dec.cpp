#include<stdio.h>
int main(){
	int r=1;
	int rows;

	printf("enter total rows\n");
	scanf("%d",&rows);
		int stars=rows;
	while(r<=rows){
		int c=1;
		while(c<=stars){
			printf("*");
			c++;
		}
		printf("\n");
		stars--;
		r++;
	}
	
	
	
	
	return 0;
}
