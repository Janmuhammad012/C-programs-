#include<stdio.h>
int main(){
	char name[60];
	FILE *p=fopen("ali.txt","r");
	if(p==NULL){
		printf("not created\n");
	}
	else{
	fgets(name,sizeof(name),p);
	printf(name);
	}
	
	
	

	
	
	return 0;
}
