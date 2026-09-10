#include<stdio.h>
int main(){
	
/*	int num;
	
	printf("enter any number\n");
	scanf("%d",&num);
	jan:
	printf("%d,",num);
	num++;
	if(num<=10){
		goto jan;
	}
	*/
/*	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	jan:
	printf("%d,",num);
	num--;
	if(num>=1){
		goto jan;
	}
	*/
/*	char ch='A';
	printf("enter a characote\n");
	scanf("%c",&ch);
	jan:
	printf("%c %d,",ch,ch);
	ch++;
	if(ch<='Z'){
		goto jan;
	}
*/
      /*   int i=0;
         jan:
         printf("%d,",i);
         i=i+2;
         if(i<=20){
         	goto jan;
		 }
	*/
	
/*	int num=1;
	jan:
	printf("%d,",num);
	num=num+2;
	if(num<=20){
		goto jan;
	}
	*/
	/*
	int sum=0;
	int i=1;
	jan:
	sum=sum+i;
	i++;
	
	if(i<=20){
		goto jan;
	}
	printf("%d,",sum);
	*/
	
/*	int table,i=1;
	printf("enter any number to print table\n");
	scanf("%d",&table);
	jan:
	printf("%d * %d = %d\n",table,i,i*table);
	i++;
	if(i<=10){
		goto jan;
	}
	
	*/
/*	int num;
	int even=0,odd=0,i=1;
	jan:
	printf("enter ten numbers\n");
	scanf("%d",&num);
	
	if(num%2==0){
		even++;
	}
	else{
		odd++;
	}
	i++;
	if(i<=10){
		goto jan;
	}
	printf("even numbers are %d\n",even);
	printf("odd numbers are %d",odd);
	
	*/
	
	int num;
	printf("enter a num\n");
	scanf("%d",&num);
	
	if(num%2==0){
		goto even;
	}
	else{
		goto odd;
	}
	
	
	
	
	even:
		printf("the num is even");
		return 0;
	
	odd:
		printf("the num is odd");
	
	return 0;
}
