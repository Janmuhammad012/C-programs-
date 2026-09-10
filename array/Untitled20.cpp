#include<stdio.h>
int main(){
	
	int a=2,b=3,c=4;
	int *p1=&a,*p2=&b,*p3=&c;
		printf("a=%d,b=%d,c=%d\n",a,b,c);
	int d=*p3;
	*p3=*p2;
	*p2=*p1;
	*p1=d;
	printf("a=%d,b=%d,c=%d",a,b,c);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
