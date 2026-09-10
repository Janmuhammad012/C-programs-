#include<stdio.h>
int main(){
/*	
	int n;
	for(n=1;n<=10;n++){
		printf("%d.",n);
	}
	*/
/*	int n;
	for(n=10;n>=1;n--){
		printf("%d.",n);
	}
	
	*/
/*	int n;
	for(n=0;n<=100;n++){
		if(n%2==0){
			printf("%d,",n);
		}
	}
	*/
/*	
	int num;
	int sum=0;
	printf("enter a number\n");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		sum=sum+i;

	}
	printf("%d",sum);
	*/
/*	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	for(int i=1;i<=10;i++){
		printf("%d*%d=%d\n",num,i,i*num);
	}
	*/
/*	int num,count=0;
	printf("enter a number\n");
	scanf("%d",&num);
	for( ;num>0;num=num/10){
		int digit=num%10;
		count++;
	
		
	}
	printf("%d",count);
	*/

	
  /*  int num;
	int sum=0;
	printf("enter a number\n");
	scanf("%d",&num);
	for( ;num>0; num/=10){
		int digit=num%10;
	  sum=sum+digit;
	
	}
	printf("%d",sum);
	*/
	
	
 /*  int num1,num2;
   printf("enter num 1\n");
   scanf("%d",&num1);
	
	  printf("enter num 2\n");
   scanf("%d",&num2);
   for(int i=num1;i<=num2;i++){
   	if(i%2==1){
   		printf("%d,",i);
	   }
   }
	
	*/
	
/*	int num;
	int reverse=0;
	printf("enter a numbr");
	scanf("%d",&num);
	for( ;num>0;num=num/10){
		int digit=num%10;
		 reverse=reverse*10+digit;
	}
	printf("%d",reverse);
	*/
/*	char ch;
	for(ch='A';ch<='Z';ch++){
		printf("%c=%d\n",ch,ch);
	}
	for(ch='a';ch<='z';ch++){
		printf("%c=%d\n",ch,ch);
	}
	
	*/
/*	int num;
	int fact=1;
	printf("enter any number to find factorial\n");
	scanf("%d",&num);
	for( ;num>1;num--){
		printf("%d*",num);
		fact=fact*num;
	}
	printf("1 = %d",fact);
	
	*/
	
/*	int num;
	int reverse=0;
	printf("enter a number\n");
	scanf("%d",&num);
	int original=num;
	for( ;num>0;num=num/10){
		int digit= num%10;
		reverse=reverse*10+digit;
	}
	if(reverse==original){
		printf("palindrome");
	}
	else{
		printf("no a palindrome");
	}
	
	
	*/
/*	int num;
	int sum=0;
	printf("enter a number\n");
	scanf("%d",&num);
	int original=num;
	for( ;num>0;num=num/10){
		int digit=num%10;
		 sum=sum+(digit*digit*digit);
	}
	if(sum==original){
		printf("armstrong number");
	}
	else{
		printf("not an armstrong number");
	}
	*/
	
/*	int n;
	int i;
	int largest=0;
	printf("enter any ten numbers\n");
	for(i=1;i<=10;i++){
		printf("enter number ");
		scanf("%d",&n);
		
		if(n>largest){
			largest=n;
		}
	}
	
	printf("largest number is %d",largest);
	*/
/*	int n,i,a=0,b=1;
	int c;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d,",a);
		c=a+b;
		a=b;
		b=c;
	}
	*/
	int flag=0;
	int count=0;
	int num;
	for(num=1;num<=100;num++){
		int c=1;
		for(c=1;c<=num;c++){
			if(num%c==0){
				count++;
			}
		}
	     
	}
if(count==2){
	printf("%d",num);
}

	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
