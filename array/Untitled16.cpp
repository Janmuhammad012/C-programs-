#include<stdio.h>
int main(){
	
	int r=1;
	int space=0;
	int rows;
	printf("enter rows\n");
	scanf("%d",&rows);
	
	int star=rows;
	while(r<=rows){
		
		int c1=1;
		while(c1<=space){
			printf(" ");
			c1++;
		}
		int num=space+0;;
		int c2=1;
		while(c2<=star){
			printf("%d ",num);
			num++;
			c2++;
		}
		printf("\n");
		
		space++;
		star--;
		
		
		r++;
	}
	
	
	
	
	
	
	
	return 0;
}
