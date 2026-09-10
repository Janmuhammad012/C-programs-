#include <stdio.h>

// Define a structure for an employee
struct employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    // Create one employee variable
    struct employee e;

    // Create a file pointer
    FILE *fp;

    // ==============================
    // STEP 1 : Take input from user
    // ==============================

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &e.salary);

    // ====================================
    // STEP 2 : Open file for writing
    // ====================================

    // "wb" means:
    // w = Write
    // b = Binary
    // If the file doesn't exist, create it.
    // If it already exists, erase old data.

    fp = fopen("employee4.dat", "wb");

    // Check whether file opened successfully
    if(fp == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    // ====================================
    // STEP 3 : Save structure into file
    // ====================================

    /*
        fwrite() syntax

        fwrite(address, size, number_of_records, file_pointer)

        &e          -> Address of structure
        sizeof(e)   -> Size of one employee structure
        1           -> Write one employee
        fp          -> File pointer
    */

    fwrite(&e, sizeof(e), 1, fp);

    printf("\nEmployee saved successfully.\n");

    // Always close the file
    fclose(fp);

    // ====================================
    // STEP 4 : Open file again for reading
    // ====================================

    // "rb"
    // r = Read
    // b = Binary

    fp = fopen("employee4.dat", "rb");

    if(fp == NULL)
    {
        printf("File not found.\n");
        return 1;
    }

    // ====================================
    // STEP 5 : Read data from file
    // ====================================

    /*
        fread()

        Read one employee record
        from the file
        into structure e.
    */

    fread(&e, sizeof(e), 1, fp);

    // ====================================
    // STEP 6 : Display the data
    // ====================================

    printf("\nEmployee Information\n");
    printf("-------------------------\n");
    printf("ID     : %d\n", e.id);
    printf("Name   : %s\n", e.name);
    printf("Salary : %.2f\n", e.salary);

    // Close file
    fclose(fp);

    return 0;
}
