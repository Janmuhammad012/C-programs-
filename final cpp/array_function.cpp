#include<stdio.h>
void find(int[],int);
int main(){
	int jan[5]={1,2,3,4,5};
	find(jan,5);
	
	
	for(int i=0;i<=4;i++){
		printf("%d\n",jan[i]);
	}
	
	
	return 0;
}
void find(int jan[],int num){
	
	for(int i=0;i<num;i++){
		jan[i];//=jan[i]+10;
	}
	
	
}
