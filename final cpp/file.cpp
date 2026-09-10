#include<stdio.h>

struct Employee
{
	char empName[100];
	int empID;
	float empSalary;
};
void addRecord();
void readRecord();
void deleteRecord();
void updateRecord();
int main()
{
		int op;
		
	while(1)
	{
	printf("1- Add New Record\n2- View All Records\n3- Delete Record\n4- Update Record\n5- Exit\n");	
	printf("Enter Your Option.........");
	scanf("%d",&op);
		if(op==1)
		{
			addRecord();	
		}
		else
		if(op==2)
		{
			readRecord();
		}
		else
		if(op==3)
		{
			deleteRecord();
		}
		else
		if(op==4)
		{
			updateRecord();
		}
		else
		if(op==5)
		{
			break;
		}
		else
		{
			printf("Invalid Option\n");
		}
	}
	return 0;
}

void deleteRecord()
{
	int id;
	printf("Enter Emp ID............");
	scanf("%d",&id);
	
	Employee e;
	FILE *f=fopen("data.dat","rb");
	FILE *temp=fopen("temp.dat","wb");
	int flg=-1;
	if(f==NULL)
	{
		printf("Unable to Open file");
	}
	else
	{
		while(fread(&e,sizeof(e),1,f))
		{
			if(e.empID==id)
			{
				flg=1;
			}
			else
			{
				fwrite(&e,sizeof(e),1,temp);
			}
		}
		fclose(f);
		fclose(temp);
		remove("data.dat");
		rename("temp.dat","data.dat");
		if(flg==1)
		{
			printf("Record Deleted\n");
		}
		else
		{
			printf("Record Not Found\n");
		}
	}

}



void readRecord()
{
	Employee e;
	FILE *f=fopen("data.dat","rb");
	if(f==NULL)
	{
		printf("Unable to Open file");
	}
	else
	{
		printf("\n-------------------------------------------------------\n");
		printf("%-15s %-15s %-15s\n","Emp Name","Emp ID","Emp Salary");
		printf("\n-------------------------------------------------------\n");

		while(fread(&e,sizeof(e),1,f))
		{
			printf("%-15s %-15d %-15f\n",e.empName,e.empID,e.empSalary);
		}
		printf("\n-------------------------------------------------------\n");
		fclose(f);
	}
}


void addRecord()
{
	Employee e;
	fflush(stdin);
	printf("Enter Name......");
	gets(e.empName);
	printf("Enter ID.......");
	scanf("%d",&e.empID);
	printf("Enter Salary......");
	scanf("%f",&e.empSalary);
	FILE *f=fopen("data.dat","ab");
	if(f==NULL)
	{
		printf("Unable to Open File....");
	}
	else
	{
		fwrite(&e,sizeof(e),1,f);
		printf("Recoded Added \n");
	}
	fclose(f);
}


void updateRecord()
{
	int id;
	printf("Enter Emp ID............");
	scanf("%d",&id);
	
	Employee e;
	FILE *f=fopen("data.dat","rb");
	FILE *temp=fopen("temp.dat","wb");
	int flg=-1;
	if(f==NULL)
	{
		printf("Unable to Open file");
	}
	else
	{
		while(fread(&e,sizeof(e),1,f))
		{
			if(e.empID==id)
			{
				flg=1;
				fflush(stdin);
				printf("Enter Updated Name.......");
				gets(e.empName);
				printf("Enter Updated Salary.......");
				scanf("%f",&e.empSalary);
				fwrite(&e,sizeof(e),1,temp);
			}
			else
			{
				fwrite(&e,sizeof(e),1,temp);
			}
		}
		fclose(f);
		fclose(temp);
		remove("data.dat");
		rename("temp.dat","data.dat");
		if(flg==1)
		{
			printf("Record Updated\n");
		}
		else
		{
			printf("Record Not Found\n");
		}
	}

}
