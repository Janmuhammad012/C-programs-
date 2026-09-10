#include<stdio.h>
int main(){
	int jan[2][2];
	int positive=0;
	int negative=0;
	int zeros=0;
	printf("enter elements to find positive and negative numbers\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&jan[i][j]);
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			if(jan[i][j]>0){
				positive++;
			}
			if(jan[i][j]<0){
				negative++;
			}
			if(jan[i][j]==0){
				zeros++;
			}
		}
	}
	printf("positive numbers are %d\n",positive);
	printf("negatvive numbers are %d\n",negative);
	printf("zeros  are %d",zeros);
	
	
	
	return 0;
}
