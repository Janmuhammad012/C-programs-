#include<stdio.h>
int main(){
	int r=1;
	int row=19;

	while(r<=row){
		int c=1;
		while(c<=row-r){
			printf(" ");
			c++;
		}
		int star=1;
		while(star<=r){
			printf("*");
			star++;
		}
		printf("\n");
		r++;
	}
	
	
	
	
	
	
	
	return 0;
}
