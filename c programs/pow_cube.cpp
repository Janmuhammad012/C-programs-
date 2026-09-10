#include<stdio.h>
#include<math.h>
int main(){
	
	int base,exp;
	printf("enter base and exponent to find power of number\n");
	scanf("%d%d",&base,&exp);
	
	int res=pow(base,exp);
	printf("power of %d is %d\n",base,res);
	
    int res1=pow(base,3);
    printf("%d",res1);
	
	
	
	
	
	
	return 0;
}
