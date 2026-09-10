#include<stdio.h>
void star(int);
int main(){
	int rows;
	printf("enter rows\n");
	scanf("%d",&rows);
	
	star(rows);
	star(3);
	star(4);
	star(5);
	int y=6;
	star(y);
	
	
	return 0;
}
void star(int rows){
	int r=1;
	while(r<=rows){
		for(int c1=1;c1<=r;c1++){
			printf("*");
		}
		printf("\n");
		r++;
	}
}
