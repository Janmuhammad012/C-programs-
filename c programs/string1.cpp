#include<stdio.h>
int uppercas(char []);
int main(){
	
	char upper[100];
	printf("enter charcactor to find upppercase letter ");
//	scanf("%s",upper)  ;
	gets(upper);
	
	int res= uppercas(upper);
	printf("uppercase = %d",res);
	
	return 0;
}
int uppercas(char jan[]){
	
	int count=0;
	for(int i=0;jan[i]!='\0';i++){
		if(jan[i]>='A' && jan[i]<='Z'){
			count++;
		}
	}
	return count;
}
