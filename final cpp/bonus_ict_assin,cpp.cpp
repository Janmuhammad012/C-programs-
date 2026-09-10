#include<stdio.h>
int main(){
	
	float salary;
	char gender;
	float bonus1;
       float bonus2;
       float tbonus;
	printf("enter you gender\n M for male\n F for frmale\n");
	scanf("%c",&gender);
	printf("enter salary\n");
	scanf("%f",&salary);
	if(gender=='M'){
		bonus1=salary*0.05;
	
		if(salary<100000){
			bonus2=bonus1+salary*0.02;
			
		}
	}

	 else if(gender=='F'){
		bonus1=salary*0.10;
	
		if(salary<100000){
			
			bonus2=salary+bonus1*0.2;
		
		}
	}
	
	else{
		printf("invild gender");
	}
       	tbonus=bonus1+bonus2;
		salary=salary+tbonus;
	 	printf("you got Rs %f bonus \n",tbonus);
	printf("your new salary is Rs %f",salary);

	
}
