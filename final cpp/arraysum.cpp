#include<stdio.h>
int main(){
	int jan[3][3];
	printf("enter number to print 3 by 3 matrix\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&jan[i][j]);
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",jan[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
