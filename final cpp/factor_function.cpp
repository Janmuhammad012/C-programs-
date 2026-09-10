#include<stdio.h>
int factor(int);
int main(){
	int num;
	printf("enter a number to find factors\n");
	scanf("%d",&num);
  int result= factor(num);
   
	printf("\n%d",result);
	
	
	return 0;
}
int factor(int dn){
	int sum=0;
	int c=1;
	while(c<=dn){
		if(dn%c==0){
			printf("%d is the factor of %d\n,",c,dn);
			  sum=sum+c; 
	
		}
		
	c++;
	

	
			
	}
		return sum;
}
