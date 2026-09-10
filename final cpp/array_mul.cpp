#include<stdio.h>
int main(){
	
	int a[3];
	printf("enter elements of a\n");
	for(int i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	int b[3];
		printf("enter elements of b\n");
			for(int i=0;i<3;i++){
		scanf("%d",&b[i]);
	}
	int c[3];
			
	for(int i=0;i<3;i++){
		c[i]=a[i]*b[i];
	}
	
	for(int i=0;i<3;i++){
		printf("%d\t",c[i]);
	}
	
	return 0;
}
