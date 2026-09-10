#include<stdio.h>
#include<string.h>
struct Book
{
	int accNo;
	char title[100];
	float price;
	char status;
};
void searchBookByTitle(Book[],int);
void searchBookByAccNo(Book[],int);
void printcountIABook(Book[],int);
void printBookRecord(Book[],int);
void inputBookRecord(Book[],int);
float computeTotalPrice(Book[],int);
int main()
{
	Book b[5]={
				{1234,"DS",300.75,'a'},
				{8421,"OOP",500.50,'a'},
				{3210,"PF",350.75,'i'},
				{3211,"EWS",300.50,'i'},
				{3212,"CALC",700.75,'a'}
			  };
	printBookRecord(b,5);
	
	float tprice=computeTotalPrice(b,5);
	printf("Total Amount: %f\n",tprice);
	
	printcountIABook(b,5);
	
	//searchBookByAccNo(b,5);
	searchBookByTitle(b,5);
	/*Book b1[3];	
	inputBookRecord(b1,3);
	printBookRecord(b1,3);*/
	return 0;
}
void searchBookByTitle(Book t[], int sz)
{
	char tx[100];
	int flg=-1;
	printf("Enter Book Title.........");
	gets(tx);
	for(int i=0; i<sz; i++)
	{
		if(strcmp(t[i].title,tx)==0)
		{
			flg=i;
		}
	}
	if(flg==-1)
	{
		printf("Record No Found");
	}
	else
	{
		printf("Record Found At Index: %d",flg);
	}
}
void searchBookByAccNo(Book t[], int sz)
{
	int ano;
	int flg=-1;
	printf("Enter Acc No.........");
	scanf("%d",&ano);
	for(int i=0; i<sz; i++)
	{
		if(t[i].accNo==ano)
		{
			flg=i;
		}
	}
	if(flg==-1)
	{
		printf("Record No Found");
	}
	else
	{
		printf("Record Found At Index: %d",flg);
	}
	
}
void printcountIABook(Book t[], int sz)
{
	int acount=0, icount=0;
	for(int i=0; i<sz; i++)
	{
		if(t[i].status=='i')
		{
			icount++;
		}
		else
		{
			acount++;
		}
	}
	printf("Total Available Books: %d\n",acount);
	printf("Total Issued Books: %d\n",icount);
}
float computeTotalPrice(Book t[], int sz)
{
	float sum=0.0;
	for(int i=0; i<sz; i++)
	{
		sum=sum+t[i].price;
	}
	return sum;
}
void inputBookRecord(Book t[],int sz)
{
	for(int i=0; i<sz; i++)
	{
	printf("\nRecord # %d\n",i);
	printf("Enter Acc No.......");
	scanf("%d",&t[i].accNo);
	fflush(stdin);
	printf("Enter Book Title......");
	gets(t[i].title);
	printf("Enter Price.......");
	scanf("%f",&t[i].price);
	fflush(stdin);
	printf("Enter Status.......");
	scanf("%c",&t[i].status);
	}
}
void printBookRecord(Book t[],int sz)
{
	printf("-----------------------------------------------------\n");
	printf("%-10s %-15s %-15s %-10s\n","Acc No","Title","Price","Status");
	printf("-----------------------------------------------------\n");
	for(int i=0; i<sz; i++)
	{
	printf("%-10d %-15s %-15f %c\n",t[i].accNo,t[i].title,t[i].price,t[i].status);
	}
	printf("-----------------------------------------------------\n");

}
