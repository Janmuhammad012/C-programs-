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
void updatePhone(struct phonestore[], int);
void saveToFile(struct phonestore[], int);
int loadFromFile(struct phonestore[]);
void deletePhoneById(struct phonestore[], int*);
void sortPhonesByPrice(struct phonestore[], int);
void sortPhonesByName(struct phonestore[], int);

int main(){
	int size=5;
	
	struct phonestore s1[5]={
		{101,"Samsung","A16","Black",8,256,5000, "50 MP",59999.0, 50, "New", 2024,"Android","1080x2340"},
		{102,"Oppo","Reno", "Blue", 12,256,5000,"50 MP",89999.0, 35, "New", 2024, "Android","1080x2412"},
		{103,"Vivo","V40", "Purple", 12,256,5500,"50 MP",129999.0, 20, "New", 2024, "Android", "1260x2800"},
		{104,"Apple","16", "White",8,256, 3561,"48 MP",349999.0, 15, "New", 2024, "iOS 18", "1179x2556"},
		{105,"Infinix","Note", "Green",8, 256, 5000, "108 MP", 69999.0, 40, "New", 2024, "Android", "1080x2436"}
	};
	
	int choice;
	printf("---WELCOME TO MY PHONE STORE---\n");
	do{
		printf("\n========================================\n");
		printf("      PHONE STORE MANAGEMENT SYSTEM     \n");
		printf("========================================\n");
		printf(" 1. Display All Phones\n");
		printf(" 2. Add New Phone\n");
		printf(" 3. Delete Phone\n");
		printf(" 4. Update Phone\n");
		printf(" 5. Search Phone by Brand\n");
		printf(" 6. Search Phone by ID\n");
		printf(" 7. Show Cheapest Phone\n");
		printf(" 8. Show Most Expensive Phone\n");
		printf(" 9. Sort Phones by Price\n");
		printf("10. Sort Phones by Brand Name\n");
		printf("11. Show Total Inventory Value\n");
		printf("12. Show Total Phone Quantity\n");
		printf("13. Save Data to File\n");
		printf("14. Load Data from File\n");
		printf("15. Exit\n");
		printf("========================================\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printphoneinfo(s1,size);
				break;
			case 2:
				addPhone(s1,&size);
				break;
			case 3:
				deletePhoneById(s1, &size);
				break;
			case 4:
				updatePhone(s1, size);
				break;
			case 5:
				searchphoneByName(s1,size);
				break;
			case 6:
				searchphoneById(s1,size);
				break;
			case 7:
				cheapestPhone(s1,size);
				break;
			case 8:
				expensivePhone(s1,size);
				break;
			case 9:
				sortPhonesByPrice(s1, size);
				printf("Phones sorted by price successfully!\n");
				printphoneinfo(s1,size);
				break;
			case 10:
				sortPhonesByName(s1, size);
				printf("Phones sorted by name successfully!\n");
				printphoneinfo(s1,size);
				break;
			case 11:{
				float res=allphoneprice(s1,size);
				printf("\nTotal Inventory Value: Rs. %.2f\n",res);
				printf("--------------------------------\n");
				break;
			}
			case 12:{
				int res1=totalPhones(s1,size);
				printf("\nTotal Phones in Store: %d\n",res1);
				printf("--------------------------------\n");
				break;
			}
			case 13:
				saveToFile(s1, size);
				break;
			case 14:
				size = loadFromFile(s1);
				break;
			case 15:
				printf("\n========================================\n");
				printf("Thank you for using Phone Store Management System!\n");
				printf("========================================\n");
				return 0;
			default:
				printf("\nInvalid choice! Please try again.\n");
		}
		
	}while(1);
	
	return 0;
}


void printphoneinfo(struct phonestore s1[],int x){
	printf("\n---------------------------------------------------------------------------------------------------------------------------\n");
	
	printf("%-5s %-8s %-8s %-8s %-5s %-8s %-8s %-8s %-10s %-5s %-10s %-8s %-10s %-10s\n",
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
		printf("%-5d %-8s %-8s %-8s %-5d %-8d %-8d %-8s %-10.2f %-5d %-10s %-8d %-10s %-10s\n",
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
		sum=sum+(s1[i].price * s1[i].quantity);
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
	printf("Enter brand name to search: ");
	scanf("%s",search);
	printf("\n---------------------------------------------------------------------------------------------------------------------------\n");
	
	printf("%-5s %-8s %-8s %-8s %-5s %-8s %-8s %-8s %-10s %-5s %-10s %-8s %-10s %-10s\n",
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
			printf("%-5d %-8s %-8s %-8s %-5d %-8d %-8d %-8s %-10.2f %-5d %-10s %-8d %-10s %-10s\n",
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
		printf("Phone brand '%s' not found!\n", search);
	}
}

void searchphoneById(struct phonestore s1[],int x){
	int search;
	int flag=0;
	printf("Enter ID to search for phone: ");
	scanf("%d",&search);
	
	for(int i=0;i<x;i++){
		if(s1[i].id==search){
			flag=1;
			printf("\n========== Phone Found ==========\n");
			printf("ID          : %d\n", s1[i].id);
			printf("Brand       : %s\n", s1[i].brand);
			printf("Model       : %s\n", s1[i].model);
			printf("Color       : %s\n", s1[i].color);
			printf("RAM         : %d GB\n", s1[i].ram);
			printf("Storage     : %d GB\n", s1[i].storage);
			printf("Battery     : %d mAh\n", s1[i].battery);
			printf("Camera      : %s\n", s1[i].camera);
			printf("Price       : Rs. %.2f\n", s1[i].price);
			printf("Quantity    : %d\n", s1[i].quantity);
			printf("Condition   : %s\n", s1[i].condition);
			printf("Launch Year : %d\n", s1[i].lounchyear);
			printf("OS          : %s\n", s1[i].os);
			printf("Resolution  : %s\n", s1[i].resolution);
			printf("=================================\n");
			break;
		}
	}
	if(flag==0){
		printf("Phone with ID %d not found!\n", search);
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
    printf("Price       : Rs. %.2f\n", s1[cheapest].price);
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
	printf("\n========== Most Expensive Phone ==========\n");
    printf("ID          : %d\n", s1[exp].id);
    printf("Brand       : %s\n", s1[exp].brand);
    printf("Model       : %s\n", s1[exp].model);
    printf("Color       : %s\n", s1[exp].color);
    printf("RAM         : %d GB\n", s1[exp].ram);
    printf("Storage     : %d GB\n", s1[exp].storage);
    printf("Battery     : %d mAh\n", s1[exp].battery);
    printf("Camera      : %s\n", s1[exp].camera);
    printf("Price       : Rs. %.2f\n", s1[exp].price);
    printf("Quantity    : %d\n", s1[exp].quantity);
    printf("Condition   : %s\n", s1[exp].condition);
    printf("Launch Year : %d\n", s1[exp].lounchyear);
    printf("OS          : %s\n", s1[exp].os);
    printf("Resolution  : %s\n", s1[exp].resolution);
    printf("==========================================\n");
}

void addPhone(struct phonestore s1[],int *x){
	int i=*x;
	
	printf("\n========== ADD NEW PHONE ==========\n");
	
	// Check for duplicate ID
	int newId;
	printf("Enter ID: ");
	scanf("%d", &newId);
	
	for(int j=0; j<*x; j++){
		if(s1[j].id == newId){
			printf("Error: Phone with ID %d already exists!\n", newId);
			return;
		}
	}
	s1[i].id = newId;
	
	printf("Enter Brand: ");
	scanf("%s", s1[i].brand);
	
	printf("Enter Model: ");
	scanf("%s", s1[i].model);
	
	printf("Enter Color: ");
	scanf("%s", s1[i].color);
	
	printf("Enter RAM (GB): ");
	scanf("%d", &s1[i].ram);
	
	printf("Enter Storage (GB): ");
	scanf("%d", &s1[i].storage);
	
	printf("Enter Battery (mAh): ");
	scanf("%d", &s1[i].battery);
	
	getchar(); 
	printf("Enter Camera: ");
	gets(s1[i].camera);
	
	printf("Enter Price: Rs. ");
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
	printf("\nPhone added successfully!\n");
	printf("====================================\n");
}

void updatePhone(struct phonestore s1[], int size){
	int id, found = 0, position = -1;
	
	printf("\n========== UPDATE PHONE ==========\n");
	printf("Enter the ID of phone to update: ");
	scanf("%d", &id);
	
	for(int i = 0; i < size; i++){
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
	
	printf("\nCurrent phone details:\n");
	printf("ID: %d | Brand: %s | Model: %s | Price: Rs. %.2f\n", 
	       s1[position].id, s1[position].brand, s1[position].model, s1[position].price);
	
	int updateChoice;
	printf("\nWhat would you like to update?\n");
	printf("1. Brand\n");
	printf("2. Model\n");
	printf("3. Color\n");
	printf("4. RAM\n");
	printf("5. Storage\n");
	printf("6. Battery\n");
	printf("7. Camera\n");
	printf("8. Price\n");
	printf("9. Quantity\n");
	printf("10. Condition\n");
	printf("11. Launch Year\n");
	printf("12. OS\n");
	printf("13. Resolution\n");
	printf("14. Update All Fields\n");
	printf("Enter your choice: ");
	scanf("%d", &updateChoice);
	
	switch(updateChoice){
		case 1:
			printf("Enter new Brand: ");
			scanf("%s", s1[position].brand);
			break;
		case 2:
			printf("Enter new Model: ");
			scanf("%s", s1[position].model);
			break;
		case 3:
			printf("Enter new Color: ");
			scanf("%s", s1[position].color);
			break;
		case 4:
			printf("Enter new RAM (GB): ");
			scanf("%d", &s1[position].ram);
			break;
		case 5:
			printf("Enter new Storage (GB): ");
			scanf("%d", &s1[position].storage);
			break;
		case 6:
			printf("Enter new Battery (mAh): ");
			scanf("%d", &s1[position].battery);
			break;
		case 7:
			getchar();
			printf("Enter new Camera: ");
			gets(s1[position].camera);
			break;
		case 8:
			printf("Enter new Price: Rs. ");
			scanf("%f", &s1[position].price);
			break;
		case 9:
			printf("Enter new Quantity: ");
			scanf("%d", &s1[position].quantity);
			break;
		case 10:
			getchar();
			printf("Enter new Condition: ");
			gets(s1[position].condition);
			break;
		case 11:
			printf("Enter new Launch Year: ");
			scanf("%d", &s1[position].lounchyear);
			break;
		case 12:
			printf("Enter new OS: ");
			scanf("%s", s1[position].os);
			break;
		case 13:
			printf("Enter new Resolution: ");
			scanf("%s", s1[position].resolution);
			break;
		case 14:
			printf("Enter new Brand: ");
			scanf("%s", s1[position].brand);
			printf("Enter new Model: ");
			scanf("%s", s1[position].model);
			printf("Enter new Color: ");
			scanf("%s", s1[position].color);
			printf("Enter new RAM (GB): ");
			scanf("%d", &s1[position].ram);
			printf("Enter new Storage (GB): ");
			scanf("%d", &s1[position].storage);
			printf("Enter new Battery (mAh): ");
			scanf("%d", &s1[position].battery);
			getchar();
			printf("Enter new Camera: ");
			gets(s1[position].camera);
			printf("Enter new Price: Rs. ");
			scanf("%f", &s1[position].price);
			printf("Enter new Quantity: ");
			scanf("%d", &s1[position].quantity);
			getchar();
			printf("Enter new Condition: ");
			gets(s1[position].condition);
			printf("Enter new Launch Year: ");
			scanf("%d", &s1[position].lounchyear);
			printf("Enter new OS: ");
			scanf("%s", s1[position].os);
			printf("Enter new Resolution: ");
			scanf("%s", s1[position].resolution);
			break;
		default:
			printf("Invalid choice! No changes made.\n");
			return;
	}
	
	printf("\nPhone updated successfully!\n");
	printf("====================================\n");
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
	
	printf("\n========== DELETE PHONE ==========\n");
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
	printf("ID: %d | Brand: %s | Model: %s | Price: Rs. %.2f\n", 
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
	printf("==================================\n");
}

void sortPhonesByPrice(struct phonestore s1[], int size){
	struct phonestore temp;
	
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - i - 1; j++){
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
	
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - i - 1; j++){
			if(strcmp(s1[j].brand, s1[j + 1].brand) > 0){
				temp = s1[j];
				s1[j] = s1[j + 1];
				s1[j + 1] = temp;
			}
		}
	}
}
