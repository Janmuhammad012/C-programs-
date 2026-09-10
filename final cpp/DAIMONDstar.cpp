#include <stdio.h>

int main() {

    int n = 5;
    int row = 1;

    /* Upper Half */

    while(row <= n) {

        int space = 1;

        while(space <= n - row) { //  means 1<=4; which is true
            printf(" ");        //    it will print one space;
            space++;          // then space increased by one which is again less than 4 and here one space will 
			                     //be printed again; so it will print 4 spaces
        }                    //for fifth ireration the program will jumb down;

        int star = 1;

        while(star <= 2 * row - 1) {  // means 1 <= 1 which it true 
            printf("*");     // it will print one star;
            star++;     // by increament star becomes 2 which becomes fall in second iteration and program jumb to print next line
        }

        printf("\n");   // it will print next line
        row++;
    }

    /* Lower Half */

    row = n - 1;

    while(row >= 1) {

        int space = 1;

        while(space <= n - row) {
            printf(" ");
            space++;
        }

        int star = 1;

        while(star <= 2 * row - 1) {
            printf("*");
            star++;
        }

        printf("\n");
        row--;
    }

    return 0;
}
