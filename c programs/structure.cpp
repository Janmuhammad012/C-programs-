#include<stdio.h>
struct book{
	int accNo;
	char name[20];
	float price;
  char status;
};
void bookinfo(struct book);
int main(){
	struct   book b;
	printf("enter details of the book\n");
	printf("enter accesion number\n");
	scanf("%d",&b.accNo);
	fflush(stdin);
	printf("enter book name\n");
	gets(b.name);
	printf("enter price of the book\n");
	scanf("%f",&b.price);
	fflush(stdin);
	printf("enter status of the book\n");
	scanf("%c",&b.status);
	bookinfo(b);
		
	return 0;
}

void bookinfo(struct book b){
	printf("\n--book information--\n");
    printf(" accesion No:%d\n",b.accNo);
    printf("book name:%s\n",b.name);
    printf("Book Price:%f\n",b.price);
    printf(" book status:%c",b.status);
}










