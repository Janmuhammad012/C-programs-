#include<stdio.h>
int main(){
	int jan[5];
	printf("enter elements of array\n");
	for(int i=0;i<5;i++){
		scanf("%d",&jan[i]);
	}
	for(int j=0;j<5;j++){
	
	for(int i=0;i<=3;i++){
		if(jan[i]>jan[i+1]){
		
		int temp=jan[i];
		jan[i]=jan[i+1];
		jan[i+1]=temp;
	
	}
	}
}
for(int i=0;i<5;i++){
	printf("%d ",jan[i]);
}	
	return 0;
}
