#include<stdio.h>
struct employee{
	
	char name[20];
    int id;
   float salary;
		
};
void addRecord( struct employee,int);
void readRecord(struct employee,int);
int main(){
	int choice;
	struct employee s1;
	int size=5;
do{

	printf("enter choice\n");
	printf("1:add add record\n");
	printf("2: view all  record\n");
	printf("3:delet record\n");
	printf("4:update record\n");
	printf("5:exit\n");
	scanf("%d",&choice);
	
	if(choice==1){
		addRecord(s1,size);
	}
	else if(choice==2){
		readRecord(s1,size);
	}
	else if(choice==3){
		
	}
	else if(choice==4){
		
	}
	else {
		printf("invilid choice\n");
		break;
	}
	
		
}while(1);
	
		return 0;
}


void readRecord(struct employee e,int size){
	
	FILE *p=fopen("jan.dat","rb");
	if(p==NULL){
		printf("file not open\n");
	}
	else{
		printf("%-8s %-10s %-10s\n","ID","Name","salary\n");
		printf("----------------------------------------\n");
		
		while(fread(&e,sizeof(e),1,p)){
		
		fprintf(p,"%-8d %-10s %-10f\n",e.id,e.name,e.salary);
		
		
		}
			printf("\n-------------------------------------------------------\n");
		fclose(p);
		
	}
	
}



void addRecord(struct employee s1,int x){
	
	
	printf("enter id\n");
	scanf("%d",&s1.id);
	
	fflush(stdin);
	printf("enter name\n");
	gets(s1.name);
	printf("enter salary\n");
	scanf("%f",&s1.salary);
	FILE *ptr=fopen("jan.dat","w");
	
	if(ptr==NULL){
		printf("file not created\n");
	}
	
	
	else{
		printf("file created");
	}
	
	

}
