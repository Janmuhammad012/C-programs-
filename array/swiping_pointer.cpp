#include<stdio.h>
int main(){
/*	
	int a,b;
	printf("enter values of a and b\n");
	scanf("%d%d",&a,&b);
	printf("a=%d b=%d\n",a,b);
	int *p1=&a;
	int *p2=&b;
	int c=*p1;
	*p1=*p2;
	*p2=c;
		printf("a=%d b=%d\n",a,b);
	
	
	*/
	
	/*	int a,b;
	printf("enter values of a and b\n");
	scanf("%d%d",&a,&b);
	printf("a=%d b=%d\n",a,b);
	int *p1=&a;
		int *p2=&b;
	*p1=*p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
		printf("a=%d b=%d\n",a,b);
	
	*/
		int a,b;
		int c;
	printf("enter values of a and b\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("a=%d b=%d c=%d\n",a,b,c);
	int *p1=&a;
		int *p2=&b;
	int *p3=&c;
	
	int d=*p1;
	*p1=*p2;
	*p2=*p3;
	*p3=d;
		printf("a=%d b=%d c=%d\n",a,b,c);
	
	
	
	
	
	return 0;
}
