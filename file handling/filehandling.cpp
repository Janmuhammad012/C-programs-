#include <stdio.h>
#include <string.h>

struct phoneStore
{
    int srno;
    char com[30];
    char name[30];
    float price;
};

// Function Prototypes
void addRecord();         /*|1  */
void readRecord();        /*|2  */
void searchByID();        /*|3  */
void searchByPrice();     /*|4  */
void updateRecord();      /*|5  */
void deleteRecord();     /* |6  */

int main()
{
    int choice;

    while(1)
    {
        printf("\n=====================================\n");
        printf("      PHONE STORE MANAGEMENT\n");
        printf("=====================================\n");
        printf("1. Add New Phone\n");
        printf("2. View All Phones\n");
        printf("3. Search Phone By ID\n");
        printf("4. Search Phone By Price\n");
        printf("5. Update Phone\n");
        printf("6. Delete Phone\n");
        printf("7. Exit\n");
        printf("=====================================\n");

        printf("Enter Your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addRecord();
                break;

            case 2:
                readRecord();
                break;

            case 3:
                searchByID();
                break;

            case 4:
                searchByPrice();
                break;

            case 5:
                updateRecord();
                break;

            case 6:
                deleteRecord();
                break;

            case 7:
                printf("\nThank You For Using Phone Store System.\n");
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}
// Function to Add New Phone Record
void addRecord()
{
    struct phoneStore p;

    FILE *f = fopen("data.dat", "ab");

    if(f == NULL)
    {
        printf("Unable to Open File!\n");
        return;
    }

    printf("\nEnter Phone ID : ");
    scanf("%d", &p.srno);

    printf("Enter Company : ");
    scanf(" %[^\n]", p.com);

    printf("Enter Phone Model : ");
    scanf(" %[^\n]", p.name);

    printf("Enter Price : ");
    scanf("%f", &p.price);

    fwrite(&p, sizeof(p), 1, f);

    fclose(f);

    printf("\nPhone Record Added Successfully.\n");
}


// Function to View All Phone Records
void readRecord()
{
    struct phoneStore p;

    FILE *f = fopen("data.dat", "rb");

    if(f == NULL)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\n===============================================================\n");
    printf("%-10s %-20s %-20s %-10s\n",
           "ID", "Company", "Model", "Price");
    printf("===============================================================\n");

    while(fread(&p, sizeof(p), 1, f))
    {
        printf("%-10d %-20s %-20s %.2f\n",
               p.srno,
               p.com,
               p.name,
               p.price);
    }

    printf("===============================================================\n");

    fclose(f);
}
// Function to Search Phone by ID
void searchByID()
{
    struct phoneStore p;
    int id, found = 0;

    FILE *f = fopen("data.dat", "rb");

    if(f == NULL)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("Enter Phone ID: ");
    scanf("%d", &id);

    printf("\n===============================================================\n");
    printf("%-10s %-20s %-20s %-10s\n",
           "ID", "Company", "Model", "Price");
    printf("===============================================================\n");

    while(fread(&p, sizeof(p), 1, f))
    {
        if(p.srno == id)
        {
            found = 1;

            printf("%-10d %-20s %-20s %.2f\n",
                   p.srno,
                   p.com,
                   p.name,
                   p.price);

            break;
        }
    }

    if(found == 0)
    {
        printf("Phone Not Found!\n");
    }

    fclose(f);
}
// Function to Search Phones by Maximum Price
void searchByPrice()
{
    struct phoneStore p;
    float price;
    int found = 0;

    FILE *f = fopen("data.dat", "rb");

    if(f == NULL)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("Enter Maximum Price: ");
    scanf("%f", &price);

    printf("\n===============================================================\n");
    printf("%-10s %-20s %-20s %-10s\n",
           "ID", "Company", "Model", "Price");
    printf("===============================================================\n");

    while(fread(&p, sizeof(p), 1, f))
    {
        if(p.price <= price)
        {
            found = 1;

            printf("%-10d %-20s %-20s %.2f\n",
                   p.srno,
                   p.com,
                   p.name,
                   p.price);
        }
    }

    if(found == 0)
    {
        printf("No Phone Found Under This Price!\n");
    }

    fclose(f);
}
// Function to Update a Phone Record
void updateRecord()
{
    struct phoneStore p;
    int id, found = 0;

    FILE *f = fopen("data.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    if(f == NULL)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("Enter Phone ID to Update: ");
    scanf("%d", &id);

    while(fread(&p, sizeof(p), 1, f))
    {
        if(p.srno == id)
        {
            found = 1;

            printf("\nEnter New Company : ");
            scanf(" %[^\n]", p.com);

            printf("Enter New Model : ");
            scanf(" %[^\n]", p.name);

            printf("Enter New Price : ");
            scanf("%f", &p.price);
        }

        fwrite(&p, sizeof(p), 1, temp);
    }

    fclose(f);
    fclose(temp);

    remove("data.dat");
    rename("temp.dat", "data.dat");

    if(found)
        printf("\nPhone Record Updated Successfully.\n");
    else
        printf("\nPhone ID Not Found!\n");
}
// Function to Delete a Phone Record
 void deleteRecord()
{
    struct phoneStore p;
    int id, found = 0;

    FILE *f = fopen("data.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    if(f == NULL)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("Enter Phone ID to Delete: ");
    scanf("%d", &id);

    while(fread(&p, sizeof(p), 1, f))
    {
        if(p.srno == id)
        {
            found = 1;
        }
        else
        {
            fwrite(&p, sizeof(p), 1, temp);
        }
    }

    fclose(f);
    fclose(temp);

    remove("data.dat");
    rename("temp.dat", "data.dat");

    if(found)
        printf("\nPhone Record Deleted Successfully.\n");
    else
        printf("\nPhone ID Not Found!\n");
}
