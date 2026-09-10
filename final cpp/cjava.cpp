#include<stdio.h>
struct book{
	int bookId;
	char bookName[20];
	float bookPrice;
};

 void inputRecord(struct book p[],int);
int mian(){
	
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
  return 0;

}
