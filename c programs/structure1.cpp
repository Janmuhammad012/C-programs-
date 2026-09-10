#include<stdio.h>
struct student{
	char name[20];
	int regNo;
	float gpa;
	char section;
};
void stuinfo(struct student s[]);
int main(){
	struct student s1[3];
for(int i=0;i<3;i++){
		printf("enter student information %d\n",i+1);
	printf("eneter student name\n");
	gets(s1[i].name);
	printf("enter student reg No\n");
	scanf("%d",&s1[i].regNo);
	printf("enter student gpa\n");
	scanf("%f",&s1[i].gpa);
		fflush(stdin);
	printf("enter student section\n");
	scanf("%c",&s1[i].section);


		
}
		stuinfo(s1);
	return 0;
}

void stuinfo(struct student s1[]){
for(int i=0;i<3;i++){
		printf("student information\n");
	printf(" student name:%s\n",s1[i].name);
	printf(" student regNo:%d\n",s1[i].regNo);
	printf("student gpa:%f\n",s1[i].gpa);
	printf("student section:%c\n",s1[i].section);
}
}









