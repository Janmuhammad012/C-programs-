#include <stdio.h>

struct employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    struct employee e;

    // Take input
    printf("Enter ID: ");
    scanf("%d", &e.id);

    printf("Enter Name: ");
    scanf("%s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    // Open file
    FILE *fp = fopen("employee.dat", "wb");

    if(fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    // Write structure to file
    fwrite(&e, sizeof(e), 1, fp);

    printf("Record Saved Successfully.\n");

    fclose(fp);

    return 0;
}
