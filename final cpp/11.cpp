#include<stdio.h>
int main(){
	int r=1;
	int rows;

	printf("enter rows\n");
	scanf("%d",&rows);
		int star=rows;
	int space=0;
	while(r<=rows){
		int c1=1;
		while(c1<=space){
			printf(" ");
			c1++;
		}
		int c2=1;
		while(c2<=star){
			printf("*");
			c2++;
		}
		printf("\n");
		star--;
		space++;
		r++;
		
	}
	
	
	return 0;
}
