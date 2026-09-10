#include<stdio.h>
void leap(int,int*);
int main(){
	
	int year;
	int res;
	printf("enter any year to check for whether it leap year or not\n");
	scanf("%d",&year);
leap(year,&res);
if(res==1){
	printf("leap yrear");
}
else{
	printf("not leap year");
}
	
	
	return 0;
}
void leap(int year,int *p1){
	if(year%4==0 && year%100==0){
         *p1=1;
	}
	else{
	    *p1=0;
	}
}
