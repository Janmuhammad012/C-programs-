#include<stdio.h>
int main(){
	
	int jan[3][3];
	for(int i=0;i<3;i++){
		printf("enter elements for row %d:\n",i+1);
		for(int j=0;j<3;j++){
			scanf("%d",&jan[i][j]);
		}
	}
	
	for(int j=0;j<3;j++){
		int sum=0;
		for(int i=0;i<3;i++){
		sum=sum+jan[i][j];	
		}
		printf("sum of elements for colom %d=%d\n",j+1,sum);
	}
	
	
	
	
	
	
	
	return 0;
}
