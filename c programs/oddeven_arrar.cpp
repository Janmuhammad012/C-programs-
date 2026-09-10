#include<stdio.h>
int main(){
	int even=0,odd=0;
	int jan[2][2];
	printf("enter element to find even and odd\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&jan[i][j]);
		}
	}
	
		for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d\t",jan[i][j]);
		   if(jan[i][j]%2==0){
		   	even++;
		   }
		   else{
		   	odd++;
		   }
		  
		}
		 printf("\n");
	}
	printf("even numberr are %d\n",even);
	printf("odd numbers are %d",odd);
	
	return 0;
}
