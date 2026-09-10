#include<stdio.h>
#include<string.h>

#define FILE_NAME "phones.dat"   /* binary file that stores phones you add, so they survive after you close and reopen the program */

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

/* ---------- NEW: file handling + sorting function prototypes ---------- */
void loadPhonesFromFile(struct phonestore s1[], int *size);
void saveAddedPhonesToFile(struct phonestore s1[], int hardcodedCount, int size);
void deletePhonePermanently(struct phonestore s1[], int *size, int hardcodedCount);
void sortPhonesByPrice(struct phonestore s1[], int x);


int main(){
	int size=5;
	int hardcodedCount=5;   /* NEW: remembers how many phones are "built in" to the code vs loaded/added from the file */

	struct phonestore s1[100]={
		              
		           {101,"Samsung","A16","Black",8,256,5000, "50 MP",59999.0, 50, "New", 2024,"Android","1080x2340"},
                  {102,"Oppo","Reno", "Blue", 12,256,5000,"50 MP",89999.0, 35, "New", 2024, "Android","1080x2412"},
                  {103,"Vivo","V40", "Purple", 12,256,5500,"50 MP",129999.0, 20, "New", 2024, "Android", "1260x2800"},
                 {104,"Apple","16", "White",8,256, 3561,"48 MP",349999.0, 15, "New", 2024, "iOS 18", "1179x2556"},
                {105,"Infinix","Note", "Green",8, 256, 5000, "108 MP", 69999.0, 40, "New", 2024, "Android", "1080x2436"}
					  
	};
	
	loadPhonesFromFile(s1,&size);   /* NEW: pulls in any phones that were added and saved in a previous run */
	
	
	int choice;
		printf("---WLCOME TO MY PHONE STORE---\n");
	do{
	
		printf(" enter choice\n");
		printf(" 1:to show all phones\n");
		printf(" 2:to show price of all phones\n");
		printf(" 3:to show all phones quantity\n");
		printf(" 4:to search brand\n");
		printf(" 5:to search brand by id\n");
		printf(" 6: to chow cheapest phone\n");
		printf(" 7 to show expensive phone\n");
		printf(" 8 to add new phone\n");
		printf(" 9:to exit\n");
		printf(" 10:to sort phones by price\n");          /* NEW */
		printf(" 11:to delete a phone permanently\n");    /* NEW */
	
	
		scanf("%d",&choice);
		if(choice==1){
				printphoneinfo(s1,size);
		}
	else if(choice==2){
			float res=allphoneprice(s1,size);
	printf("sum of total phone=%f\n",res);
	printf("----------------------------\n");
	}
	else if(choice==3){
		
	int res1=totalPhones(s1,size);
	printf("total phone in shope=%d\n",res1);
	printf("--------------------------------\n");
	}
	else if(choice==4){
		searchphoneByName(s1,size);
	}
	else if(choice==5){
		searchphoneById(s1,size);
	}
	else if(choice==6){
		
	cheapestPhone(s1,size);
	//printf("cheapes phone:%d",cheapest);
	}
	else if(choice==7){
		expensivePhone(s1,size);
	}
	else if(choice==8){
		addPhone(s1,&size);
		saveAddedPhonesToFile(s1,hardcodedCount,size);   /* NEW: writes the newly added phone to the file so it isn't lost */
	}
	else if(choice==9){
		printf("thank you\n");
		return 0;
		
	}
	else if(choice==10){                                  /* NEW */
		sortPhonesByPrice(s1,size);
		printf("phones sorted by price successfully\n");
	}
	else if(choice==11){                                  /* NEW */
		deletePhonePermanently(s1,&size,hardcodedCount);
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
for(int i=0;i<x;i++){
	if(strcmp(s1[i].brand,search)==0){
		flag=1;
		printf("------------------------\n");
	printf("phone found\n");
	printf("id:%d\nbrand:%s\nprice:%f\n",s1[i].id,s1[i].brand,s1[i].price);
	printf("--------------------------------------\n");
	}

}
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
fflush(stdin);
printf("Enter Camera: ");
gets(s1[i].camera);
fflush(stdin);
printf("Enter Price: ");
scanf("%f", &s1[i].price);
fflush(stdin);
printf("Enter Quantity: ");
scanf("%d", &s1[i].quantity);
fflush(stdin);
printf("Enter Condition: ");
gets(s1[i].condition);

printf("Enter Launch Year: ");
scanf("%d", &s1[i].lounchyear);

printf("Enter OS: ");
scanf("%s", s1[i].os);

printf("Enter Resolution: ");
scanf("%s", s1[i].resolution);
	
	(*x)++;
printf("phone add successfully\n");

	
	
}

/* =====================================================================
   NEW FUNCTIONS: FILE HANDLING + SORTING
   =====================================================================
   These use fopen/fread/fwrite/fclose from <stdio.h> to write raw
   struct data straight to a binary file (phones.dat) and read it back.
   "wb" = write binary, "rb" = read binary, "ab" would append binary.
   ===================================================================== */

/* Reads every phone previously saved in phones.dat and appends them
   into the array right after the 5 hardcoded phones, updating size
   so the rest of the program (which loops using "size") sees them too. */
void loadPhonesFromFile(struct phonestore s1[], int *size){
	FILE *fp = fopen(FILE_NAME, "rb");
	if(fp == NULL){
		/* File doesn't exist yet (first run) -- nothing to load, that's fine */
		return;
	}

	struct phonestore temp;
	while(fread(&temp, sizeof(struct phonestore), 1, fp) == 1){
		if(*size >= 100){   /* don't overflow the array */
			break;
		}
		s1[*size] = temp;
		(*size)++;
	}

	fclose(fp);
	printf("previous saved phones loaded from file successfully\n");
}

/* Overwrites phones.dat with only the phones that are NOT hardcoded
   (i.e. index >= hardcodedCount). We rewrite the whole file each time
   instead of just appending, so that permanent deletes are reflected too. */
void saveAddedPhonesToFile(struct phonestore s1[], int hardcodedCount, int size){
	FILE *fp = fopen(FILE_NAME, "wb");
	if(fp == NULL){
		printf("error: could not open file to save\n");
		return;
	}

	for(int i = hardcodedCount; i < size; i++){
		fwrite(&s1[i], sizeof(struct phonestore), 1, fp);
	}

	fclose(fp);
}

/* Deletes a phone by ID from the in-memory array AND from the file,
   so it is gone permanently, not just for this run.
   Note: the 5 hardcoded phones live inside the code itself (in the
   s1[100]={...} initializer in main), so deleting one of them only
   removes it for the current run -- it will reappear next time the
   program starts, because it is typed directly into the source code,
   not stored in the file. Phones added with option 8 delete for good. */
void deletePhonePermanently(struct phonestore s1[], int *size, int hardcodedCount){
	int search;
	int index = -1;

	printf("enter id of phone to delete permanently\n");
	scanf("%d", &search);

	for(int i = 0; i < *size; i++){
		if(s1[i].id == search){
			index = i;
			break;
		}
	}

	if(index == -1){
		printf("record not found\n");
		return;
	}

	/* shift every element after "index" one place to the left,
	   which overwrites the deleted phone and closes the gap */
	for(int i = index; i < (*size) - 1; i++){
		s1[i] = s1[i+1];
	}
	(*size)--;

	saveAddedPhonesToFile(s1, hardcodedCount, *size);   /* re-write the file without the deleted phone */

	if(index < hardcodedCount){
		printf("phone deleted for this session (it is a built-in phone, so it will reappear next run)\n");
	} else {
		printf("phone deleted permanently\n");
	}
}

/* Sorts the phones array in ascending order of price using bubble sort:
   repeatedly compares neighboring elements and swaps them if they are
   in the wrong order, so after enough passes the smallest price ends
   up first and the largest ends up last. */
void sortPhonesByPrice(struct phonestore s1[], int x){
	struct phonestore tempSwap;

	for(int i = 0; i < x - 1; i++){
		for(int j = 0; j < x - i - 1; j++){
			if(s1[j].price > s1[j+1].price){
				tempSwap = s1[j];
				s1[j] = s1[j+1];
				s1[j+1] = tempSwap;
			}
		}
	}
}

