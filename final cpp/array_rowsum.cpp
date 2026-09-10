#include<stdio.h>
int main(){
	int jan[3][3];
	for(int i=0;i<3;i++){
		printf("enter elements for row %d:\n",i+1);
		for(int j=0;j<3;j++){
			scanf("%d",&jan[i][j]);
		}
	}
	
	for(int i=0;i<3;i++){
		int sum=0;
		for(int j=0;j<3;j++){
			sum=sum+jan[i][j];
		}
		printf("sum for row %d =%d\n",i+1,sum);
	}
	
	
	
	
	
	
	return 0;
}
