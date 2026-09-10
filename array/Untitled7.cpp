#include<stdio.h>
int main(){
    int r=1;
    int rows;
    printf("enter total rows\n");
    scanf("%d",&rows);
    int star=rows;  // start with full width
    int space=0;
    
    while(r<=rows){
        int c1=1;
        while(c1<=space){
            printf(" ");
            c1++;
        }

        int c2=1;
        int num=r;
        while(c2<=star){
            printf("%d ",num); // added space after %d
            num++;
            c2++;
        }
        printf("\n");

        if(r < (rows+1)/2){  // top half
            space++;
            star=star-1;     // reduce by 1, not 2
        }
        else{                // bottom half
            space--;
            star=star+1;     // increase by 1, not 2
        }
        r++;
    }
    return 0;
}
