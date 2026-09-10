#include<stdio.h>
int main(){
	int ll;
	int ul;
	printf("enter lower limit\n");
	scanf("%d",&ll);
	printf("enter upper limit\n");
	scanf("%d",&ul);
	int num=ll;
	
		int evensum=0;
		int oddsum=0;
	do{
	
		if(num%2==0){
			evensum=evensum+num;
			
		
		}
		else{
			oddsum=oddsum+num;
		}
		
			num++;	
	}
	while(num<=ul);
	
	printf("even sum is =%d\n",evensum);
	printf("odd sum =%d",oddsum);
	
		
	return 0;
}
