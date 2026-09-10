#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int rolldice(){

 return rand()%10+1;
}
int main(){
	int result;
	srand(time(0));
		int dice;
		
	for(int i=1;i<=3;i++){
			printf("roll dice\n");
		
			scanf("%d",&dice);
		result=rolldice();
		printf("roll %d : %d\n",i,result);
			if(dice>result){
		printf("the actual number is grater then %d\n",result);
	}
	
	else{
			printf("the actual number is smaller then %d\n",result);
	}
	
	}

	
	if(dice==result){
		printf("congradulation");
	}
	
	
	
	
	
	
	
	
	return 0;
}
