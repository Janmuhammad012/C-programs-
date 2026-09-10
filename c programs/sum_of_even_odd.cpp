#include<stdio.h>
int main(){
	
	int ul;
	int ll;
	int evensum=0;
	int oddsum=0;
	printf("enter lower limit\n");
	scanf("%d",&ll);
	printf("enter upper limit\n");
	scanf("%d",&ul);
	while(ll<=ul){
		if(ll%2==0){
			evensum=evensum+ll;
		}
	   else{
	   	oddsum=oddsum+ll;
	   }
		
		
		
		ll++;
	}
	
	printf("sum of even difits is %d\n",evensum);
	printf("sum of odd digit is %d",oddsum);
	
	
	
	
	
	
	
	return 0;
}
