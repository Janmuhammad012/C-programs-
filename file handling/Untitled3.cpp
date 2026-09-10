#include<stdio.h>
int main(){
	char ch[50];
	int count=0;
	printf("enter charactors\n");
	gets(ch);
	int c=0;
	while(ch[c]!='\0'){

	if(ch[c] =='a' || ch[c]=='e' || ch[c]=='i' || ch[c]=='o' || ch[c]=='u'){
		count++;
	}
	c++;
}

	printf("total vowel =%d",count);
		
	
	return 0;
}
