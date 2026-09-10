#include<stdio.h>
int larg(int);
int main(){
//	int n;
//	printf("enter five numbers\n");
for(int i=1;i<=5;i++){
		int n;
	printf("enter five numbers\n");scanf("%d",&n);
	

   	
   
	
	int largest=larg(n);
	printf("%d is largest",largest);
	
	
	
	
	
	return 0;
}
}
int larg(int a,int b,int c,int d,int e){
	int largest=a;
	if(b>largest){
		largest=b;
	}
	if(c>largest){
		largest=c;
	}
	if(d>largest){
		largest=d;
	}
	if(e>largest){
		largest=e;
	}
	return largest;
}
