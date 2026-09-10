#include <stdio.h>

int main()
{
    FILE *fp = fopen("student.txt", "r");

    int id;
    char name[20];
    float salary;

    fscanf(fp, "%d %s %f", &id, name, &salary);

    printf("%d\n", id);
    printf("%s\n", name);
    printf("%.2f\n", salary);

    fclose(fp);

    return 0;
}
