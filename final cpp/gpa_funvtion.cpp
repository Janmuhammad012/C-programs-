#include<stdio.h>
void findgpa(float[],int);
int main(){
	float gpa[5]={4,3.4,2.5,3.7,3.9};
	
	findgpa(gpa,5);
	
	
	return 0;
}
void findgpa(float gpa[],int s){
	int flag=0;
	s=5;
	float num;
	printf("enter gpa to check\n");
	scanf("%f",&num);
	for(int i=0;i<=s;i++){
		if(num==gpa[i]){
			flag=1;
		}
	}
	if(flag==0){
			printf("gpa not found");
	
	}
	else{
		printf("gpa found");
	}
}
