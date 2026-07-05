#include<stdio.h>
int main(){
	
	int num,largest=0,i=1;
while(i<=8){
	printf("enter a number\n");
	scanf("%d",&num);
	if(num>largest){
		largest=num;
	}
	i++;
}
printf("lartest number is %d",largest);	
	
	
	
	return 0;
}
