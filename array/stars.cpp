#include<stdio.h>
int main(){
	int r=1;
	int rows;
	printf("enter total rows\n");
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
	if(r<=rows/2){
			space++;
		star=star-2;
	
	}
	else{
				space--;
		star=star+2;

	}
		r++;

			}
	
	
	
	return 0;
}
