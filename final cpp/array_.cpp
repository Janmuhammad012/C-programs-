#include<stdio.h>
int main(){
	
	int jan[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&jan[i][j]);
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(jan[i][j]<0){
				jan[i][j]=0;
				
			}
			printf("%d\t",jan[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
