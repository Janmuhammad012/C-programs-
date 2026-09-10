#include<stdio.h>
	int power(int, int);
int main(){

	int a=3;
	int b=4;
	 int result=power(a,b);
    	int  result1=power(4,6);
	printf("power of a and is %d\n",result);
		printf("power of a and is %d\n",result1);
		int result2=power(5,2);
		printf("power of a and is %d\n",result2);

	return 0;
}

int  power(int a,int b){
	int result=1;
	for(int i=1;i<=b;i++){
		result=result*a;
	}
	

return result;
}
