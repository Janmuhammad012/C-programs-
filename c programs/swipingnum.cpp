#include<stdio.h>
void jan(int *p1,int *p2,int *p3){


int temp=*p1;
*p1=*p2;
*p2=*p3;
*p3=temp;
}

int main(){
	
	int a,b,c;
	printf("enter values of a b and c\n");
	scanf("%d%d%d",&a,&b,&c);
	
	printf("bfore swiping a=%d b=%d c=%d\n",a,b,c);
	
	jan(&a,&b,&c);
	
		printf("after swiping a=%d b=%d c=%d",a,b,c);
	
	
	
	
	
	
	
	
	return 0;
}
