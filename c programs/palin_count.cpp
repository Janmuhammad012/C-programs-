#include<stdio.h>
void palin(int,int ,int);
int main(){
	int num;
	int count=0;
	int countsum=0;
	printf("enter number to find whether it is palindrom or nor\n");
	scanf("%d",&num);
    palin(num,count,countsum);
	

	
	return 0;
}
void palin(int num,int count,int countsum){
	int dn=num;
	int rev=0;
	while(num>0){
	int digit=num%10;
	rev=rev*10+digit;
	count++;
	countsum=countsum+digit;
	num/=10;
	
	}
if(dn==rev){
	printf("palindrome\n");
	
}
else{
	printf("not palindrome\n");
}
printf("count=%d\n",count);
printf("countsum=%d",countsum);
	
}
