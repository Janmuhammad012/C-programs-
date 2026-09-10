#include<stdio.h>

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

void printphoneinfo(struct phonestore p[], int x);
float allphoneprice(struct phonestore p[], int x);
int totalPhones(struct phonestore p[], int x);

int main(){
    struct phonestore s1[5]={
        {101,"samsung","a16","white",16,256,5000,"50 mg",50000,100,"new",2024,"android","1080 by 2400"},
        {101,"samsung","a16","white",16,256,5000,"50 mg",50000,100,"new",2024,"android","1080 by 2400"},
        {101,"samsung","a16","white",16,256,5000,"50 mg",50000,100,"new",2024,"android","1080 by 2400"},
        {101,"samsung","a16","white",16,256,5000,"50 mg",50000,100,"new",2024,"android","1080 by 2400"},
        {101,"samsung","a16","white",16,256,5000,"50 mg",50000,100,"new",2024,"android","1080 by 2400"},
    };

    int choice;

    do{
        printf("\n----- PHONE STORE MENU -----\n");
        printf("1. Display all phones\n");
        printf("2. Show total price of all phones\n");
        printf("3. Show total quantity of phones\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1){
            printphoneinfo(s1, 5);
        }
        else if(choice == 2){
            float res = allphoneprice(s1, 5);
            printf("sum of total phone = %.2f\n", res);
        }
        else if(choice == 3){
            int res1 = totalPhones(s1, 5);
            printf("total phone in shop = %d\n", res1);
        }
        else if(choice == 4){
            printf("Exiting...\n");
        }
        else{
            printf("Invalid choice, try again.\n");
        }

    } while(choice != 4);

    return 0;
}

void printphoneinfo(struct phonestore s1[], int x){
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("%-5s %-8s %-5s %-5s %-5s %-8s %-8s %-8s %-10s %-5s %-10s %-8s %-10s %-10s\n",
       "ID","Brand","Model","Color","RAM","Storage","Battery","Camera",
       "Price","Qty","Condition","Year","OS","Resolution");
    printf("------------------------------------------------------------------------------------------------------------------------\n");

    for(int i=0;i<x;i++){
        printf("%-5d %-8s %-5s %-5s %-5d %-8d %-8d %-8s %-10.2f %-5d %-10s %-8d %-10s %-10s\n",
           s1[i].id, s1[i].brand, s1[i].model, s1[i].color,
           s1[i].ram, s1[i].storage, s1[i].battery, s1[i].camera,
           s1[i].price, s1[i].quantity, s1[i].condition,
           s1[i].lounchyear, s1[i].os, s1[i].resolution);
    }
    printf("------------------------------------------------------------------------------------------------------------------------\n");
}

float allphoneprice(struct phonestore s1[], int x){
    float sum=0;
    for(int i=0;i<x;i++){
        sum = sum + s1[i].price;
    }
    return sum;
}

int totalPhones(struct phonestore s1[], int x){
    int total=0;
    for(int i=0;i<x;i++){
        total = total + s1[i].quantity;
    }
    return total;
}
