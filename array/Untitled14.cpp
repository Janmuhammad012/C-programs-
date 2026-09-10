#include<stdio.h>
int main(){
	int r=1;
	int rows;
	printf("enter rows\n");
	scanf("%d",&rows);
	int space=0;
	int star=rows;
	while(r<=2*rows-1){
		
		int c1=1;
		while(c1<=space){
			printf(" ");
			c1++;
		}
		int c2=1;
		int num=space+1;
		while(c2<=star){
			printf("%d",num);
			num++;
			c2++;
			
		}
		printf("\n");
		if(r<rows){
			space++;
			star--;
		}
		else{
			space--;
			star++;
		}
		
		
		
		r++;
	}
	
	
	
	
	
	

	return 0;
}
