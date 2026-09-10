#include<stdio.h>

struct Book
{
	int bookID;
	char bookTitle[100];
	float bookPrice;
};
void inputRec(Book[],int);
void viewRec(Book[],int);
void computePrice(Book[],int);
int main()
{
	int index=-1;
	Book b[10];	
	int op;
	while(1)
	{
	printf("1) Add Record\n2) View All Record\n3) Compute Price\n4) Exit\nEnter Your Choice......");
	scanf("%d",&op);
	if(op==1)
	{
	index++;
	inputRec(b,index);
	}
	else
	if(op==2)
	{
		
		viewRec(b,index);
	}
	else
	if(op==3)
	{
		computePrice(b,index);
	}
	else
	if(op==4)
	{
		break;
	}
	
	}
	
	
	
	
	return 0;
}
void computePrice(Book t[],int idx)
{
	float sum=0;
	for(int i=0; i<=idx; i++)
	{
		sum=sum+t[i].bookPrice;
	}
	printf("Total Price: %f\n",sum);
}
void viewRec(Book t[],int idx)
{
	if(idx==-1)
	{
		printf("No Record Found\n");
	}
	else
	{
		for(int i=0; i<=idx; i++)
		{
			printf("%6d %20s %10f\n",t[i].bookID,t[i].bookTitle,t[i].bookPrice);
	
		}
		
	}
	
	
}


void inputRec(Book t[],int idx)
{
	if(idx>=10)
	{
		printf("No More Space\n");
	}
	else
	{
		 Book temp;
		 printf("Enter Book ID.......");
		 scanf("%d",&temp.bookID);
		 fflush(stdin);
		 printf("Enter Book Title......");
		 gets(temp.bookTitle);
		 printf("Enter Book Price.......");
		 scanf("%f",&temp.bookPrice);
		 t[idx]=temp;
		 printf("Record Added\n");
	}
}
