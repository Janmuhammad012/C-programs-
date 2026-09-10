#include<stdio.h>
struct book{
	int bookId;
	char bookName[20];
	float bookPrice;
};

 void inputRecord(struct book p[],int);
int main(){
	
	struct book b[10];
	int indx=-1;
	int op;
while(1){	printf("enter a choice\n");
	printf("1) add record\n");
	printf("2) dipaly rocord\n");
	printf("3) disply total price\n");
	printf("4) exit\n");
	scanf("%d",&op);
}

    
  if(op==1){
       inputRecord(b,indx);
  }
  else





  return 0;

}
void inputRecord(struct book b[],int indx){
     if(indx>=10){
     	printf("no more space\n");
	 }
	 else{
	 		printf("enter book id\n");
	scanf("%d",&b[].bookId);
	fflush(stdin);
	printf("enter book name\n");
	gets(b.bookNmae);
	printf("ente",&b[].bookPrice);
	printf("record added sussesfully\n");
	 }
}








