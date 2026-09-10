#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
	srand(time(0));
	int guess;
	int num=rand()%5+1;
	printf("guess a number  you have three attemps\n");
	for(int i=1;i<=3;i++){
	printf("enter number \n");
	scanf("%d",&guess);
	
	if(guess==num){
		printf("congrajulation you guessed correctly %d %d\n ",num,guess);
		return 0;
	}
	else if(guess>num){
		printf("guess is greater then random number guess=%d random=%d",guess,num);
	}
	else{
		printf("guess is smaller then random number  guess=%d random=%d",guess,num);
	}	
	
		
	}

	printf("the actual number is %d",num);
	
	
	
	
	
	
	
	return 0;
}
