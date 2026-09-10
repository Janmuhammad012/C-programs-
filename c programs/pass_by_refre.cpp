#include<stdio.h>
void compute(float,float*,float*,float*);
int main(){
	float area;
	float r=6;
	float d;
	float circum;
	compute(r,&area,&d,&circum);
	
	printf("area=%.02f\n",area);
	printf("daimeter=%.02f\n",d);
	printf("circum=%.02f",circum);
	
	
	return 0;
}
void compute(float r,float *p1,float *p2,float *p3){
	
	*p1=3.14*r*r;
	*p2=r*r;
	*p3=2*3.14*r;
	
	
}
