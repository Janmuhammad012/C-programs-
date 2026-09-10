#include<stdio.h>
void compute(float,float*,float*,float*);
int main(){
	float d,a,p;
	float radous=5.1;
	
	
	compute(radous,&a,&d,&p);
	
	printf("daimeter=%f\n",d);
	printf("area=%f\n",a);
	printf("parameter=%f",p);
	
	
	
	
	
	
	return 0;
}

void compute(float radous,float *p1,float *p2,float *p3){
	
	*p2=2*radous;
	*p1=3.14*radous*radous;
	*p3=2*3.14*radous;
	
	
	
	
}
