#include<stdio.h>
int main(){
	
	char ch[40];
	printf("enter charactors\n");
	gets(ch);
	int r=0;
	int count=0;
	while(ch[r]!='\0'){
		if(ch[r]>='A' && ch[r]<='Z'){
			count++;
		}
		r++;
	}
	
	
	printf("total uppercase alphabet count=%d",count);
	
	
	
	
	return 0;
}
