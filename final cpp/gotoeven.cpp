#include<stdio.h>
int main(){
	
	int num;
     int count =1,even=0,odd=0;
      jan:
     printf("enter a number\n");
     scanf("%d",&num);
    
     if(num%2==0){
     	even++;
	 }
	 else{
	 	odd++;
	 }
	 count++;
	 if(count<=10){
	 	goto jan;
	 }
	 printf("evnen number are %d\n",even);
	 printf("even numbers are %d",odd);
	
	
	
	
	
	return 0;
}
