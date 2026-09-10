#include<stdio.h>
#include<math.h>
void armstrong(int ,int*,int*);
int main(){
	int num;
	int res;
	int count=0;
	printf("enter a numberer\n");
	scanf("%d",&num);
	armstrong(num,&res,&count);
	
	if(res==1){
		printf("%d is arsmtrong",num);
		
	}
	else{
		printf("%d is not armstrong",num);
	}
	
	printf("count=%d",count);
	
	
	
	return 0;
}
void armstrong(int num,int *p1,int *p2){

int dn=num;
int count=0;
while(dn>0){
dn=dn/10;
	count++;
}
dn=num;
int sum=0;
while(dn>0){
	int digit=dn%10;
	sum=sum+pow(digit,count);
	dn/=10;
}
if(sum==num){
	*p1=1;
	
}
else{
	*p1=0;
}
*p2=count;
}
