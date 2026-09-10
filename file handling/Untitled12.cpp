#include<stdio.h>
int main(){
	
	FILE *p=fopen("ali.txt","w");
	if(p==NULL){
		printf("not created\n");
	}
	else{
		 fprintf(p,"hellow my firedn\n");
		 fprintf(p,"this is me jan muhammmad i am very excited\n");
		 int res= fprintf(p,"this is me jan muhammmad i am very excited\n");
		 printf("%d",res);
	}
	
	
	
	
	
	
	return 0;
}
