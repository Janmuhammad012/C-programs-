#include<stdio.h>
void star(int);
int main(){
	int rows=5;
	
	 star(rows);
	
	return 0;
}

void star(int rows){
	int r=1;
		int star=rows;
		int space=0;
	while(r<=2*rows-1){
	
		for(int c1=1;c1<=space;c1++){
			printf(" ");
		}
		for(int c2=1;c2<=star;c2++){
			printf("*");
			
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
}
