#include<stdio.h>
#include<string.h>
#include<stdlib.h>  

struct phonestore{
	int id;
	char brand[20];
	char model[30];
	char color[30];
	int ram;
	int storage;
	int battery;
	char camera[30];
	float price;
	int quantity;
	char condition[30];
	int lounchyear;
	char os[30];
	char resolution[30];
};


void printphoneinfo(struct phonestore [],int) ;
float allphoneprice(struct phonestore [],int);
int totalPhones(struct phonestore[],int);
void searchphoneByName(struct phonestore[],int);
void searchphoneById(struct phonestore[],int);
void cheapestPhone(struct phonestore[],int);
void expensivePhone(struct phonestore[],int);
void addPhone(struct phonestore[],int*);


void saveToFile(struct phonestore[], int);
int loadFromFile(struct phonestore[]);
void deletePhoneById(struct phonestore[], int*);
void sortPhonesByPrice(struct phonestore[], int);
void sortPhonesByName(struct phonestore[], int);

int main(){
	int size=5;
	
	struct phonestore s1[100]={
		              
		           {101,"Samsung","A16","Black",8,256,5000, "50 MP",59999.0, 50, "New", 2024,"Android","1080x2340"},
                  {102,"Oppo","Reno", "Blue", 12,256,5000,"50 MP",89999.0, 35, "New", 2024, "Android","1080x2412"},
                  {103,"Vivo","V40", "Purple", 12,256,5500,"50 MP",129999.0, 20, "New", 2024, "Android", "1260x2800"},
                 {104,"Apple","16", "White",8,256, 3561,"48 MP",349999.0, 15, "New", 2024, "iOS 18", "1179x2556"},
                {105,"Infinix","Note", "Green",8, 256, 5000, "108 MP", 69999.0, 40, "New", 2024, "Android", "1080x2436"}
					  
	};
	
	int choice;
	printf("---WLCOME TO MY PHONE STORE---\n");
	do{
	
		printf("\n enter choice\n");
		printf(" 1: to show all phones\n");
		printf(" 2: to show price of all phones\n");
		printf(" 3: to show all phones quantity\n");
		printf(" 4: to search brand\n");
		printf(" 5: to search brand by id\n");
		printf(" 6: to show cheapest phone\n");
		printf(" 7: to show expensive phone\n");
		printf(" 8: to add new phone\n");
		printf(" 9: to delete phone permanently\n");
		printf(" 10: to save data to file\n");
		printf(" 11: to load data from file\n");
		printf(" 12: to sort phones by price\n");
		printf(" 13: to sort phones by name\n");
		printf(" 14: to exit\n");
	
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printphoneinfo(s1,size);
				break;
			case 2:{
				float res=allphoneprice(s1,size);
				printf("sum of total phone=%f\n",res);
				printf("----------------------------\n");
				break;
			}
			case 3:{
				int res1=totalPhones(s1,size);
				printf("total phone in shope=%d\n",res1);
				printf("--------------------------------\n");
				break;
			}
			case 4:
				searchphoneByName(s1,size);
				break;
			case 5:
				searchphoneById(s1,size);
				break;
			case 6:
				cheapestPhone(s1,size);
				break;
			case 7:
				expensivePhone(s1,size);
				break;
			case 8:
				addPhone(s1,&size);
				break;
			case 9:
				deletePhoneById(s1, &size);
				break;
			case 10:
				saveToFile(s1, size);
				break;
			case 11:
				size = loadFromFile(s1);
				break;
			case 12:
				sortPhonesByPrice(s1, size);
				printf("Phones sorted by price successfully!\n");
				break;
			case 13:
				sortPhonesByName(s1, size);
				printf("Phones sorted by name successfully!\n");
				break;
			case 14:
				printf("Thank you for using Phone Store Management System!\n");
				return 0;
			default:
				printf("Invalid choice! Please try again.\n");
		}
		
	}while(1);
	
	return 0;
}


void printphoneinfo(struct phonestore s1[],int x){
	printf("---------------------------------------------------------------------------------------------------------------------------\n");
	
printf("%-5s %-8s %-5s %-6s %-5s %-8s %-8s %-8s %-10s %-5s %-10s %-8s %-10s %-10s\n",
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
		printf("---------------------------------------------------------------------------------------------------------------------------\n");
	for(int i=0;i<x;i++){
	printf("%-5d %-8s %-5s %-6s %-5d %-8d %-8d %-8s %-10.2f %-5d %-10s %-8d %-10s %-10s\n",
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
		printf("---------------------------------------------------------------------------------------------------------------------------\n");
}

float allphoneprice(struct phonestore s1[],int x){
	float sum=0;
	for(int i=0;i<x;i++){
		sum=sum+s1[i].price;
	}
	return sum;
}

int totalPhones(struct phonestore s1[],int x){
	int total=0;
	for(int i=0;i<x;i++){
		total=total+s1[i].quantity;
	}
	return total;
}

void searchphoneByName(struct phonestore s1[],int x){

	int flag=0;
	char search[30];
	printf("enter brand name\n");
	scanf("%s",search);
	    	printf("---------------------------------------------------------------------------------------------------------------------------\n");
	
printf("%-5s %-8s %-5s %-6s %-5s %-8s %-8s %-8s %-10s %-5s %-10s %-8s %-10s %-10s\n",
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
		printf("---------------------------------------------------------------------------------------------------------------------------\n");
	for(int i=0;i<x;i++){
		if(strcmp(s1[i].brand,search)==0){
			flag=1;
			printf("%-5d %-8s %-5s %-6s %-5d %-8d %-8d %-8s %-10.2f %-5d %-10s %-8d %-10s %-10s\n",
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
	

	}
		printf("---------------------------------------------------------------------------------------------------------------------------\n");
		
	
	if(flag==0){
		printf("phone brand not found\n");
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
			printf("---------------------------------------------\n");
			break;
		}
	}
	if(flag==0){
		printf("record not found\n");
	}
}

void cheapestPhone(struct phonestore s1[],int x){
	int cheapest=0;
	for(int i=1;i<x;i++){
		if(s1[i].price<s1[cheapest].price){
			cheapest=i;
		}
	}
	printf("\n========== Cheapest Phone ==========\n");
    printf("ID          : %d\n", s1[cheapest].id);
    printf("Brand       : %s\n", s1[cheapest].brand);
    printf("Model       : %s\n", s1[cheapest].model);
    printf("Color       : %s\n", s1[cheapest].color);
    printf("RAM         : %d GB\n", s1[cheapest].ram);
    printf("Storage     : %d GB\n", s1[cheapest].storage);
    printf("Battery     : %d mAh\n", s1[cheapest].battery);
    printf("Camera      : %s\n", s1[cheapest].camera);
    printf("Price       : %.2f\n", s1[cheapest].price);
    printf("Quantity    : %d\n", s1[cheapest].quantity);
    printf("Condition   : %s\n", s1[cheapest].condition);
    printf("Launch Year : %d\n", s1[cheapest].lounchyear);
    printf("OS          : %s\n", s1[cheapest].os);
    printf("Resolution  : %s\n", s1[cheapest].resolution);
    printf("====================================\n");
}

void expensivePhone(struct phonestore s1[],int x){
	int exp=0;
	for(int i=1;i<x;i++){
		if(s1[i].price>s1[exp].price){
			exp=i;
		}
	}
	printf("\n========== expensive Phone ==========\n");
    printf("ID          : %d\n", s1[exp].id);
    printf("Brand       : %s\n", s1[exp].brand);
    printf("Model       : %s\n", s1[exp].model);
    printf("Color       : %s\n", s1[exp].color);
    printf("RAM         : %d GB\n", s1[exp].ram);
    printf("Storage     : %d GB\n", s1[exp].storage);
    printf("Battery     : %d mAh\n", s1[exp].battery);
    printf("Camera      : %s\n", s1[exp].camera);
    printf("Price       : %.2f\n", s1[exp].price);
    printf("Quantity    : %d\n", s1[exp].quantity);
    printf("Condition   : %s\n", s1[exp].condition);
    printf("Launch Year : %d\n", s1[exp].lounchyear);
    printf("OS          : %s\n", s1[exp].os);
    printf("Resolution  : %s\n", s1[exp].resolution);
    printf("====================================\n");
}

void addPhone(struct phonestore s1[],int *x){
	int i=*x;
	printf("Enter ID: ");
	scanf("%d", &s1[i].id);

	printf("Enter Brand: ");
	scanf("%s", s1[i].brand);

	printf("Enter Model: ");
	scanf("%s", s1[i].model);

	printf("Enter Color: ");
	scanf("%s", s1[i].color);

	printf("Enter RAM: ");
	scanf("%d", &s1[i].ram);

	printf("Enter Storage: ");
	scanf("%d", &s1[i].storage);

	printf("Enter Battery: ");
	scanf("%d", &s1[i].battery);
	getchar(); 
	printf("Enter Camera: ");
	gets(s1[i].camera);

	printf("Enter Price: ");
	scanf("%f", &s1[i].price);

	printf("Enter Quantity: ");
	scanf("%d", &s1[i].quantity);
	getchar(); 
	printf("Enter Condition: ");
	gets(s1[i].condition);

	printf("Enter Launch Year: ");
	scanf("%d", &s1[i].lounchyear);

	printf("Enter OS: ");
	scanf("%s", s1[i].os);

	printf("Enter Resolution: ");
	scanf("%s", s1[i].resolution);
	
	(*x)++;
	printf("Phone added successfully!\n");
}



void saveToFile(struct phonestore s1[], int size){
	FILE *fp;
	fp = fopen("phonestore.txt", "w");
	
	if(fp == NULL){
		printf("Error opening file!\n");
		return;
	}
	

	fprintf(fp, "%d\n", size);
	

	for(int i = 0; i < size; i++){
		fprintf(fp, "%d\n", s1[i].id);
		fprintf(fp, "%s\n", s1[i].brand);
		fprintf(fp, "%s\n", s1[i].model);
		fprintf(fp, "%s\n", s1[i].color);
		fprintf(fp, "%d\n", s1[i].ram);
		fprintf(fp, "%d\n", s1[i].storage);
		fprintf(fp, "%d\n", s1[i].battery);
		fprintf(fp, "%s\n", s1[i].camera);
		fprintf(fp, "%.2f\n", s1[i].price);
		fprintf(fp, "%d\n", s1[i].quantity);
		fprintf(fp, "%s\n", s1[i].condition);
		fprintf(fp, "%d\n", s1[i].lounchyear);
		fprintf(fp, "%s\n", s1[i].os);
		fprintf(fp, "%s\n", s1[i].resolution);
	}
	
	fclose(fp);
	printf("Data saved to file successfully! Total records: %d\n", size);
}


int loadFromFile(struct phonestore s1[]){
	FILE *fp;
	fp = fopen("phonestore.txt", "r");
	
	if(fp == NULL){
		printf("File not found! Please save data first.\n");
		return 0;
	}
	
	int size;
	fscanf(fp, "%d\n", &size);
	

	for(int i = 0; i < size; i++){
		fscanf(fp, "%d\n", &s1[i].id);
		fscanf(fp, "%s\n", s1[i].brand);
		fscanf(fp, "%[^\n]\n", s1[i].model);
		fscanf(fp, "%s\n", s1[i].color);
		fscanf(fp, "%d\n", &s1[i].ram);
		fscanf(fp, "%d\n", &s1[i].storage);
		fscanf(fp, "%d\n", &s1[i].battery);
		fscanf(fp, "%[^\n]\n", s1[i].camera);
		fscanf(fp, "%f\n", &s1[i].price);
		fscanf(fp, "%d\n", &s1[i].quantity);
		fscanf(fp, "%[^\n]\n", s1[i].condition);
		fscanf(fp, "%d\n", &s1[i].lounchyear);
		fscanf(fp, "%[^\n]\n", s1[i].os);
		fscanf(fp, "%[^\n]\n", s1[i].resolution);
	}
	
	fclose(fp);
	printf("Data loaded from file successfully! Total records: %d\n", size);
	return size;
}


void deletePhoneById(struct phonestore s1[], int *size){
	int id, found = 0, position = -1;
	
	printf("Enter the ID of phone to delete: ");
	scanf("%d", &id);

	for(int i = 0; i < *size; i++){
		if(s1[i].id == id){
			found = 1;
			position = i;
			break;
		}
	}
	
	if(found == 0){
		printf("Phone with ID %d not found!\n", id);
		return;
	}
	
	
	printf("\nPhone to be deleted:\n");
	printf("ID: %d | Brand: %s | Model: %s | Price: %.2f\n", 
	       s1[position].id, s1[position].brand, s1[position].model, s1[position].price);
	
	char confirm;
	printf("Are you sure you want to delete this record? (y/n): ");
	scanf(" %c", &confirm);
	
	if(confirm == 'y' || confirm == 'Y'){
	
		for(int i = position; i < *size - 1; i++){
			s1[i] = s1[i + 1];
		}
		(*size)--;
		printf("Phone deleted successfully!\n");
		
	
		saveToFile(s1, *size);
	} else {
		printf("Deletion cancelled.\n");
	}
}


void sortPhonesByPrice(struct phonestore s1[], int size){
	struct phonestore temp;
	
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - i; j++){
			if(s1[j].price > s1[j + 1].price){
			
				temp = s1[j];
				s1[j] = s1[j + 1];
				s1[j + 1] = temp;
			}
		}
	}
}


void sortPhonesByName(struct phonestore s1[], int size){
	struct phonestore temp;
	
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size - i - 1; j++){
			if(strcmp(s1[j].brand, s1[j + 1].brand) > 0){
				// Swap the entire structure
				temp = s1[j];
				s1[j] = s1[j + 1];
				s1[j + 1] = temp;
			}
		}
	}
}
