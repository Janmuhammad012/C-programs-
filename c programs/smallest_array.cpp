#include<stdio.h>
int main(){
	int jan[2][2];
	printf("enter elements to find largest of them\n");
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&jan[i][j]);
		}
	}
	int smallest=jan[0][0];
	
	for(int i=1;i<2;i++){
		for(int j=0;j<2;j++){
			if(smallest>jan[i][j]){
				smallest=jan[i][j];
			}
		}
	}
	printf("%d is largest",smallest);
	
	
	
	return 0;
}
