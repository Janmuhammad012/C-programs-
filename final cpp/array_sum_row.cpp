#include<stdio.h>
int main(){
	
	int jan[3][3];
	for(int i=0;i<3;i++){
		printf("enter elements for row %d:\n",i+1);
		for(int j=0;j<3;j++){m
			scanf("%d",&jan[i][j]);
		}
	}

	for(int i=0;i<3;i++){
			int max=jan[i][0];
		for(int j=0;j<3;j++){
			if(max<jan[i][j])
			max=jan[i][j];
			
		}
		printf("max number in row %d=%d\n",i+1,max);
	}
	
	
	
	
	
	return 0;
}
