#include<stdio.h>
int main(){
	 char name[40]="jan is my best friend";
      FILE *pf=	fopen("fila1.txt","a");
      if(pf==NULL){
      	printf("file not created");
	  }
	  else{
	  	

	  	int index=0;
	  	while(index!='\0'){
	  		fputc(name[index],pf);
	  		index++;
		  }
	  }
	  fclose(pf);
}
