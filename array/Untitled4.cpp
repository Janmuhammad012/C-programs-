#include<stdio.h>
int main(){
	int r=1;
	int rows;
	printf("enter rows\n");
	scanf("%d",&rows);
	int outsp=rows-1;
	int innersp=0;
	char ch='A'+rows-1;
	while(r<=rows){
		
		int c1=1;
		while(c1<=outsp){
			printf(" ");
			c1++;
		}
		printf("%c",ch);
		
		
			int c2=1;
			while(c2<=innersp){
				printf(" ");
				c2++;
			}
			
			printf("%c",ch);
		
		printf("\n");
		outsp--;
		ch--;
		
		if(r==1){
			innersp=innersp+1;
			
		}
		else{
			innersp=innersp+2;
		}
		
		
		
		
		r++;
	}
	
	
	return 0;
}
