#include<stdio.h>
int main(){
	int rows;
	int r=1;
	int space=0;
	printf("enter rows\n");
	scanf("%d",&rows);
	int star=rows;
	while(r<=rows*2-1){
		
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
		
		if(r<rows){
			star--;
			space++;
		}
		else{
			star++;
			space--;
		}
		
		
		
		r++;
	}
	
	
	
	
	
	
	
	
	return 0;
}
