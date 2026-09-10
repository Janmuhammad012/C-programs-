#include<stdio.h>
int main(){
    int rows;
    printf("enter total rows\n");
    scanf("%d",&rows);

    // Total rows = 2*rows - 1
    for(int r=1; r<=2*rows-1; r++){
        int start_num, count, spaces;

        if(r <= rows){ 
            // Top half including middle
            start_num = r; 
            count = rows - r + 1; 
            spaces = r - 1;
        } else { 
            // Bottom half
            start_num = 2*rows - r; 
            count = r - rows + 1; 
            spaces = 2*rows - r - 1;
        }

        // Print spaces
        for(int s=1; s<=spaces; s++){
            printf(" ");
        }

        // Print numbers
        for(int i=0; i<count; i++){
            printf("%d ", start_num + i);
        }
        printf("\n");
    }
    return 0;
}
