#include<stdio.h>
int allcaps(char []);
int main(){
	
	char jan[20];
	printf("enter charactore\n");
	
	gets(jan muhammad);
	allcaps(jan);
	puts(jan);
	
	
	
	
	
	return 0;
}
int allcaps(char jan[]){
	;
	for(int i=0;jan[i]!='\0';i++){
		if(jan[i]>='a' && jan[i]<='z'){
			jan[i]=jan[i]-32;
		}
	}
}
