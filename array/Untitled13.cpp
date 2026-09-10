#include<stdio.h>
int main(){
	int a=2;
	int b=3;
	int *p1=&a;
	int *p2=&b;
	printf(" %u\n",&a);
	printf("%u\n",p1);
	printf("%u\n",&p1);
	printf("%d",*(&p1));
}
