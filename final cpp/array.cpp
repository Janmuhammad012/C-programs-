#include<stdio.h>
int main(){
	
	int marks[5];
	for(int i=1;i<=5;i++){
	
	printf("enter marks ");
	scanf("%d",&marks[i]);
	
}
printf("five numbers are\n");
for(int i=1;i<=5;i++){
	printf("%d,",marks[i]);
}
	
	
	return 0;
}
