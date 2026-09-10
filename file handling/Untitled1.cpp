#include<stdio.h>
int main(){
	int a=10;

	int m[2][3]={
	
	
	    {10,20,30},
		{40,50,60}

	};
		
	printf("%d\n",a);
    	printf("%u\n",m);
		printf("%u\n",m[0][0]);
		printf("%u\n",&m);
		printf("%u\n",&m[0][0]);
		printf("%u\n",*m);
		printf("%u\n",&m[1][2]);
		printf("%u\n",**m);
		printf("%u\n",m[0][2]);
	   printf("%u",&m[1][1]);
	
	
	
	
	
	return 0;
}
