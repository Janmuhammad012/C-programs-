#include<stdio.h>

struct Book
{
	int bookID;
	char bookTitle[100];
	float bookPrice;
};
	int index=-1;
	Book b[10];	
void inputRec();
void viewRec();
void computePrice();
int main()
{
	int op;
	while(1)
	{
	printf("1) Add Record\n2) View All Record\n3) Compute Price\n4) Exit\nEnter Your Choice......");
	scanf("%d",&op);
	if(op==1)
	{
	index++;
	inputRec();
	}
	else
	if(op==2)
	{
		
		viewRec();
	}
	else
	if(op==3)
	{
		computePrice();
	}
	else
	if(op==4)
	{
		break;
	}
	
	}
	
	
	
	
	return 0;
}
void computePrice()
{
	float sum=0;
	for(int i=0; i<=index; i++)
	{
		sum=sum+b[i].bookPrice;
	}
	printf("Total Price: %f\n",sum);
}
void viewRec()
{
	if(index==-1)
	{
		printf("No Record Found\n");
	}
	else
	{
		for(int i=0; i<=index; i++)
		{
			printf("%6d %20s %10f\n",b[i].bookID,b[i].bookTitle,b[i].bookPrice);
	
		}
		
	}
	
	
}


void inputRec()
{
	if(index>=10)
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
		 b[index]=temp;
		 printf("Record Added\n");
	}
}
