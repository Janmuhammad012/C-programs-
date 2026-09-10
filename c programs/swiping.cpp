#include<stdio.h>
int main(){
	
	int a,b,c;
  printf("enter values of a and b\n");
  scanf("%d%d%d",&a,&b,&c);
  int *p1=&a;
  int *p2=&b;
  int *p3=&c;
  	printf("a=%d b=%d c=%d\n",a,b,c);
  int d;
  /*
   d=*p1;
   *p1=*p2;
   *p2=*p3;
   *p3=d;
   */
   d=*p3;
   *p3=*p2;
   *p2=*p1;
   *p1=d;





	printf("a=%d b=%d c=%d",a,b,c);
	
	
	
	
	
	
	return 0;
}
