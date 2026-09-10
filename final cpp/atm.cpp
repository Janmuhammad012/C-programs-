#include<stdio.h>
int main(){
	int balance=1000;
	int amount;
	int choice;
		int check;
		printf("  -------WELCOME TO ATM MACHINE-------\n");
	while(1){
	    printf("enter choice\n");
		printf("1: To chect balance---\n");
		printf("2 To to deposit----\n");
		printf("3: to witdraw----\n");
		printf("4: to exit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			
			case 1:
				printf("your current balance is %d\n",balance);
				
				break;
		
				case 2:
							printf("enter amount to deposit\n");
				scanf("%d",&amount);
					balance=balance+amount;
					printf(" deposit success\n");
					printf("do you want to check balance\n");
				
					printf("enter 1 to check balance\n");
					printf("enter 2 to to exit\n");
					scanf("%d",&check);
					if(check==2){
						break;
					}
					printf("your current balance is %d\n",balance);
					
				
					break;
					case 3:
						printf("enter amount to withdraw\n");
						scanf("%d",&amount);
					
						if(amount>balance){
							printf("invilid amount withdraw\n");
							break;
							
						}
							balance=balance-amount;
						printf("withdraw successful\n");
						printf("do you want to check balcance\n");
						printf("enter 1 to check\n");
						printf("enter 2 to exit\n\n\n\n");
						
						scanf("%d",&check);
						if(check==2){
							break;
							
						}
						printf("your current balance is %d",balance);
						
						break;
						case 4:
							printf("thanks for using our ATM\n");
							return 0;
							break;
				              default:
				              	printf("invilid choice\n");
				              	break;;
					
		}
		

	}
	
	
	return 0;
}
