#include<stdio.h>
int main(){
    int r=1;
    int rows;
    printf("enter total rows\n");
    scanf("%d",&rows);
    
    int total_rows = 2*rows - 1; // full hourglass
    int star = rows;             // numbers in current row
    int space = 0;               // spaces before numbers
    
    while(r <= total_rows){
        int c1 = 1;
        
        // print spaces
        while(c1 <= space){
            printf(" ");
            c1++;
        }

        int c2 = 1;
        int num;
        
        // decide starting number for top vs bottom half
        if(r <= rows){
            num = r;                 // 1,2,3...
        } else {
            num = total_rows - r + 1; // 6,5,4...1 
        }

        // print numbers
        while(c2 <= star){
            printf("%d ",num);
            num++;
            c2++;
        }
        printf("\n");

        // update space and star for next row
        if(r < rows){
            space++;        // top half: more space, less numbers
            star = star-1;
        }
        else{
            space--;        // bottom half: less space, more numbers  
            star = star+1;
        }
        r++;
    }
    return 0;
}
