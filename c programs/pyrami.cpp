#include<stdio.h>
int main(){
	int r=1;
	int row;
	int star=1;
	int num=1;
	
	printf("enter rows");
	scanf("%d",&row);
	int space=row-1;
	
	while(r<=row){
		int c1=1;
		while(c1<=space){
			printf(" ");
			c1++;
			
		}
		int c2=1;
		while(c2<=star){
			printf("%d",num);
			num=num+2;
			c2++;
		}
		printf("\n");
		star=star+2;
		space--;
		
		
		
	
		
		r++;
	}
}
