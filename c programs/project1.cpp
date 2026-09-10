#include<stdio.h>
#include<string.h>
struct phonestore{
	int id;
	char brand[20];
	char model[10];
	char color[10];
	int ram;
	int storage;
	int battery;
	char camera[10];
	float price;
	int quantity;
	char condition[10];
	int lounchyear;
	char os[20];
	char resolution[20];
};
void printphoneinfo(struct phonestore p[],int x) ;
float allphoneprice(struct phonestore [],int);
int totalPhones(struct phonestore[],int);
void searchphoneByName(struct phonestore[],int);
void searchphoneById(struct phonestore[],int);

int main(){
	
	struct phonestore s1[5]={
		              
		              {101,"samsung","a16","white",16,256,5000,"50 mg",50000,100,"new",2024,"android","1080 by 2400"},
		              {102,"opppo","a16","white",16,256,5000,"50 mg",50000,100,"new",2024,"android","1080 by 2400"},
		              {103,"vivi","a16","white",16,256,5000,"50 mg",50000,100,"new",2024,"android","1080 by 2400"},
		              {104,"iphone","a16","white",16,256,5000,"50 mg",50000,100,"new",2024,"android","1080 by 2400"},
		              {105,"infinix","a16","white",16,256,5000,"50 mg",50000,100,"new",2024,"android","1080 by 2400"},
					  
	};
	
	
	
	int choice;
	do{
		printf("phone store\n");
		printf("1:to show all phones\n");
		printf("2:to show price of all phones\n");
		printf("3:to show all phones quantity\n");
		printf("4:to show brand\n");
		printf("5:to show brand by id\n");
		printf("6:to exit\n");
	
		printf("enter choice\n");
		scanf("%d",&choice);
		if(choice==1){
				printphoneinfo(s1,5);
		}
	else if(choice==2){
			float res=allphoneprice(s1,5);
	printf("sum of total phone=%f\n",res);
	}
	else if(choice==3){
		
	int res1=totalPhones(s1,5);
	printf("total phone in shope=%d\n",res1);
	}
	else if(choice==4){
		searchphoneByName(s1,5);
	}
	else if(choice==5){
		searchphoneById(s1,5);
	}
	else if(choice==6){
		printf("thank you\n");
		return 0;
		
	}
		
		
	}while(1);
	



	
	return 0;
}
void printphoneinfo(struct phonestore s1[],int x){
	printf("------------------------------------------------------------------------------------------------------------------------");
printf("%-5s %-8s %-5s %-5s %-5s %-8s %-8s %-8s %-10s %-5s %-10s %-8s %-10s %-10s\n",
       "ID",
       "Brand",
       "Model",
       "Color",
       "RAM",
       "Storage",
       "Battery",
       "Camera",
       "Price",
       "Qty",
       "Condition",
       "Year",
       "OS",
       "Resolution");
       	printf("------------------------------------------------------------------------------------------------------------------------");
	for(int i=0;i<x;i++){
	printf("%-5d %-8s %-5s %-5s %-5d %-8d %-8d %-8s %-10.2f %-5d %-10s %-8d %-10s %-10s\n",
       s1[i].id,
       s1[i].brand,
       s1[i].model,
       s1[i].color,
       s1[i].ram,
       s1[i].storage,
       s1[i].battery,
       s1[i].camera,
       s1[i].price,
       s1[i].quantity,
       s1[i].condition,
       s1[i].lounchyear,
       s1[i].os,
       s1[i].resolution);	
	}
		printf("------------------------------------------------------------------------------------------------------------------------");
	
	
}
float allphoneprice(struct phonestore s1[],int x){
	
	float sum=0;
	for(int i=0;i<5;i++){
		sum=sum+s1[i].price;
	}
	
	return sum;
		
}

int totalPhones(struct phonestore s1[],int x){
	
	int total=0;
	for(int i=0;i<5;i++){
		total=total+s1[i].quantity;
	}
	return total;
	
}

void searchphoneByName(struct phonestore s1[],int x){
	int flag=0;
	char search[30];
	printf("enter brand name\n");
	scanf("%s",search);
for(int i=0;i<x;i++){
	if(strcmp(s1[i].brand,search)==0){
		flag=1;
	printf("phone found\n");
	printf("id:%d\nbrand:%s\nprice:%f\n",s1[i].id,s1[i].brand,s1[i].price);
	}
	if(flag==0){
		printf("phone brand not found\n");
		break;
	}
}
}
void searchphoneById(struct phonestore s1[],int x){
	int search;
	int flag=0;
	printf("enter id to search for phone\n");
	scanf("%d",&search);
	for(int i=0;i<x;i++){
		if(s1[i].id==search){
			flag=1;
			printf("id found\n");
			printf("id:%d\n phone brand:%s\n price:%f\n",s1[i].id,s1[i].brand,s1[i].price);
		}
		if(flag==0){
			printf("record not found\n");
			break;
			
		}
	}
}









