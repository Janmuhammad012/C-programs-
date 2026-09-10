#include<stdio.h>
#include<string.h>
struct student{
	char name[20];
	char Fname[20];
	int regNo;
	int  age;
	char address[200];
	char gender[10];
	char department[50];
	int  semester;
	int  phone;
	char email;
	char status;
	char attendance;
	float gpa;
	char section;
};
void studentinfo(struct student [],int);
int main(){
//	int jan[]
	struct student s1[5]={
		
		             {"jan muhammad","wedan Gul",012,22,"bar qamber kherl bara district khyber","male",1,0331609947 },
		            { "adil",035,2.1,'A'},
		            {"jannat",013,1.9,'A' },
		            {"Kaneez",199,1.4,'A' },
		            { "jonny",6,3.999,'A'}	
	};
	
	
	/*
		printf("%-15s%-20s%-15s%-10s\n","name","RegNo","GpA","section");
		printf("------------------------------------------------------------\n");
	for(int i=0;i<5;i++){
	
		printf("%-15s""%-20d""%-15.002f""%-10c\n",s1[i].name,s1[i].regNo,s1[i].gpa,s1[i].section);
		
	}
			printf("------------------------------------------------------------\n");
			*/
			/*
			for(int i=0;i<5;i++){
				printf("enter student information#%d\n",i+1);
				printf("enter student name\n");
				gets(s1[i].name);
				printf("enter student reg number\n");
				scanf("%d",&s1[i].regNo);
				printf("enter student gpa\n");
				scanf("%f",&s1[i].gpa);
				fflush(stdin);
				printf("enter student section\n");
				scanf("%c",&s1[i].section);
				fflush(stdin);
			}
			*/
			
			
			
			
			
			
			
			
			
		studentinfo(s1,5);	
			
	return 0;		
			
}
void studentinfo(struct student s[], int jan){
	printf("-------------------------------------------------\n");
	printf("%-15s%-15s%-15s%-10s\n","Name","RegNO","GPA","section\n");
		printf("-------------------------------------------------\n");
	
	for(int i=0;i<5;i++){
		
		printf("%-15s""%-15d""%-15.3f""%-10c\n",s[i].name,s[i].regNo,s[i].gpa,s[i].section);
		

		
	}
				printf("-------------------------------------------------\n");
	
	
	
}





