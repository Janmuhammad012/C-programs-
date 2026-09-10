#include<stdio.h>
int main(){
	
      FILE *pf=	fopen("fila.txt","a");
      if(pf==NULL){
      	printf("file not created");
	  }
	  else{
	  	
	printf("%c",fputc('b',pf));
	  	fputc('a',pf);
	  	printf("\nfile created\n");
	  }
	  fclose(pf);
}
