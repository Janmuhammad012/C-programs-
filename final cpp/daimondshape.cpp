#include<stdio.h>
int main(){
	
	int r=1;
	int rows;
	int star=1;
	printf("enter rows\n");
	scanf("%d",&rows);
	int space=rows-1;
	while(r<=rows){
		int c=1;
		while(c<=space){
			printf(" ");
			c++;
		}
		int c2=1;
		while(c2<=star){
			printf("*");
			c2++;
		}
		printf("\n");
         if(r<=rows/2){
         	space--;
         	star=star+2;
		 }
		 else{
		 	space++;
		 	star=star-2;
		 }
		r++;
	}	
	
	
	return 0;
}
