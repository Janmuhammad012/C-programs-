#include<stdio.h>
#include<string.h>
struct Book
{
	int accNo;
	char title[100];
	float price;
	char status;
};

void inputBook(Book *);
void printBook(Book);
int main()
{
	Book b1,b2;//,b3;
	inputBook(&b1);
	//Item by Item data copy
	/*b2.accNo=b1.accNo;
	b2.price=b1.price;
	b2.status=b1.status;
	strcpy(b2.title,b1.title);*/
	
	// at once copying
	b2=b1;
	
	
	
	printBook(b2);
	
	
/*	inputBook(&b2);
	printBook(b2);
	inputBook(&b3);
	printBook(b3);
*/	
	/*printf("Accession Number: %d\n",b1.accNo);
	printf("Book Title: %s\n",b1.title);
	printf("Book Price: %f\n",b1.price);
	printf("Book Status: %c\n",b1.status);
	*/
	
	/*Book b2;
	printf("Enter Title.........");
	gets(b2.title);
	printf("Enter Price........");
	scanf("%f",&b2.price);
	printf("Enter Acc No.......");
	scanf("%d",&b2.accNo);
	fflush(stdin);
	printf("Enter Status........");
	scanf("%c",&b2.status);
	
	printBook(b2);*/
	/*printf("Accession Number: %d\n",b2.accNo);
	printf("Book Title: %s\n",b2.title);
	printf("Book Price: %f\n",b2.price);
	printf("Book Status: %c\n",b2.status);
	*/
	
	/*Book b3={1234,"DS",456.76,'i'};
	printBook(b3);
	*/
	return 0;
}
void inputBook(Book *t)
{
	fflush(stdin);
	printf("Enter Title.........");
	gets(t->title);
	printf("Enter Price........");
	scanf("%f",&t->price);
	printf("Enter Acc No.......");
	scanf("%d",&t->accNo);
	fflush(stdin);
	printf("Enter Status........");
	scanf("%c",&t->status);
}
void printBook(Book t)
{
	printf("\b-------------------------------------------\n");
	printf("Book Information\n");
	printf("-------------------------------------------\n");
	printf("Accession Number: %d\n",t.accNo);
	printf("Book Title: %s\n",t.title);
	printf("Book Price: %f\n",t.price);
	printf("Book Status: %c\n",t.status);
    printf("-------------------------------------------\n");
}
