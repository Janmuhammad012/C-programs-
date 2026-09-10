/*#include<stdio.h>
void fact(long long int,long long int*);
int main(){
	
	int num;
	long long int fact1;
	printf("enter number\n");
	scanf("%d",&num);
	
	
	fact(num,&fact1);
	printf("factorial=%lld",fact1);
	
	
	
	return 0;
}
void fact(long long int num,long long int *fact1){
	*fact1=1;
	for(int i=1;i<=num;i++){
		*fact1=*fact1*i;
	}
}*/


//
#include<stdio.h>
void fact( int, long long int*); //created a function with name fact (long long int mean it stores  very big values ,its range is 
int main()                                      //greater then int ,,,we created long long int* for big values
{
	int num;
	long long int fact1;
	printf("enter the number\n");
	scanf("%d", &num);
	
	fact(num,&fact1);
	printf("%lld", fact1);
	return 0;
}
void fact( int num, long long int *fact)
{
	*fact=1;
	for(int i=1; i<=num; i++)
	{
		*fact=*fact*i;
	}
}
