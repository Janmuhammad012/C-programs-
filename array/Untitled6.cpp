#include<stdio.h>
int main(){
	int r=1;
	int rows;
	printf("enter total rows\n");
	scanf("%d",&rows);
	int star=rows-r+1;

	int space=0;
    
	while(r<=rows){
       	int c1=1;
       	
	while(c1<=space){
		printf(" ");
		c1++;
}
	int c2=1;
		int num=r;
	while(c2<=star){
		printf("%d ",num);
		num++;
		c2++;
	}
	printf("\n");
	if(r<=rows/2){
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
