#include<stdio.h>
int main(){
	int r=1;
	int rows;
	printf("enter rows\n");
	scanf("%d",&rows);
	int outsp=rows-1;
	int innersp=0;
	char ch='A'+rows-1;
	
for(r=1;r<=rows;r++){
	
	for(int c1=1;c1<=outsp;c1++){
		printf(" ");
	}
	printf("%c",ch);
	
	if(r>1){
	
	for(int c2=1;c2<=innersp;c2++){
		printf(" ");
	}
	printf("%c",ch);
}
printf("\n");
outsp--;
ch--;
if(r==1){
	innersp=innersp+1;
}
else{
	innersp=innersp+2;
}
	
	
	
	
}
	
	
	
	
	return 0;
}
