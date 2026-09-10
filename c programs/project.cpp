#include<stdio.h>
#include<string.h>

#define MAX 10   // maximum number of phones the store can hold

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

// ---------- function prototypes ----------
void printphoneinfo(struct phonestore p[], int x);
float allphoneprice(struct phonestore p[], int x);
int totalPhones(struct phonestore p[], int x);
void addPhone(struct phonestore p[], int *count);
void showMenu(void);

int main(){
    struct phonestore s1[MAX] = {
        {101,"samsung","a16","white",16,256,5000,"50 mg",50000,100,"new",2024,"android","1080 by 2400"},
        {101,"samsung","a16","white",16,256,5000,"50 mg",50000,100,"new",2024,"android","1080 by 2400"},
        {101,"samsung","a16","white",16,256,5000,"50 mg",50000,100,"new",2024,"android","1080 by 2400"},
        {101,"samsung","a16","white",16,256,5000,"50 mg",50000,100,"new",2024,"android","1080 by 2400"},
        {101,"samsung","a16","white",16,256,5000,"50 mg",50000,100,"new",2024,"android","1080 by 2400"},
    };

    int count = 5;      // how many phones are currently stored (starts with your 5)
    int choice;

    do{
        showMenu();
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printphoneinfo(s1, count);
                break;

            case 2: {
                float res = allphoneprice(s1, count);
                printf("Sum of total phone price = %.2f\n", res);
                break;
            }

            case 3: {
                int res1 = totalPhones(s1, count);
                printf("Total phones in shop = %d\n", res1);
                break;
            }

            case 4:
                addPhone(s1, &count);
                break;

            case 5:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }

    } while(choice != 5);

    return 0;
}

// ---------- menu display ----------
void showMenu(void){
    printf("\n================ PHONE STORE MENU ================\n");
    printf("1. Display all phones\n");
    printf("2. Show total price of all phones\n");
    printf("3. Show total quantity of phones\n");
    printf("4. Add a new phone\n");
    printf("5. Exit\n");
    printf("====================================================\n");
    printf("Enter your choice: ");
}

// ---------- display all phone records ----------
void printphoneinfo(struct phonestore s1[], int x){
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("%-5s %-8s %-5s %-5s %-5s %-8s %-8s %-8s %-10s %-5s %-10s %-8s %-10s %-10s\n",
           "ID","Brand","Model","Color","RAM","Storage","Battery","Camera",
           "Price","Qty","Condition","Year","OS","Resolution");
    printf("------------------------------------------------------------------------------------------------------------------------\n");

    for(int i = 0; i < x; i++){
        printf("%-5d %-8s %-5s %-5s %-5d %-8d %-8d %-8s %-10.2f %-5d %-10s %-8d %-10s %-10s\n",
               s1[i].id, s1[i].brand, s1[i].model, s1[i].color,
               s1[i].ram, s1[i].storage, s1[i].battery, s1[i].camera,
               s1[i].price, s1[i].quantity, s1[i].condition,
               s1[i].lounchyear, s1[i].os, s1[i].resolution);
    }
    printf("------------------------------------------------------------------------------------------------------------------------\n");
}

// ---------- sum of all phone prices ----------
float allphoneprice(struct phonestore s1[], int x){
    float sum = 0;
    for(int i = 0; i < x; i++){        // fixed: use x, not hardcoded 5
        sum = sum + s1[i].price;
    }
    return sum;
}

// ---------- total quantity of phones ----------
int totalPhones(struct phonestore s1[], int x){
    int total = 0;
    for(int i = 0; i < x; i++){        // fixed: use x, not hardcoded 5
        total = total + s1[i].quantity;
    }
    return total;
}

// ---------- add a new phone record ----------
void addPhone(struct phonestore s1[], int *count){
    if(*count >= MAX){
        printf("Store is full! Cannot add more phones.\n");
        return;
    }

    struct phonestore p;
    printf("Enter ID: ");
    scanf("%d", &p.id);
    printf("Enter brand: ");
    scanf("%s", p.brand);
    printf("Enter model: ");
    scanf("%s", p.model);
    printf("Enter color: ");
    scanf("%s", p.color);
    printf("Enter RAM: ");
    scanf("%d", &p.ram);
    printf("Enter storage: ");
    scanf("%d", &p.storage);
    printf("Enter battery: ");
    scanf("%d", &p.battery);
    printf("Enter camera: ");
    scanf("%s", p.camera);
    printf("Enter price: ");
    scanf("%f", &p.price);
    printf("Enter quantity: ");
    scanf("%d", &p.quantity);
    printf("Enter condition: ");
    scanf("%s", p.condition);
    printf("Enter launch year: ");
    scanf("%d", &p.lounchyear);
    printf("Enter OS: ");
    scanf("%s", p.os);
    printf("Enter resolution (no spaces): ");
    scanf("%s", p.resolution);

    s1[*count] = p;
    (*count)++;

    printf("Phone added successfully!\n");
}
