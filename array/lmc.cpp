#include<stdio.h>
int main(){
    int lcm, n1, n2;
    printf("Enter value of n1 and n2\n");
    scanf("%d%d", &n1, &n2);

    lcm = (n1 > n2) ? n1 : n2;  

    do{
        if(lcm % n1 == 0 && lcm % n2 == 0){
            break;
        }
        lcm++;
    }while(1);

    printf("LCM of n1 and n2 = %d", lcm);
    return 0;
}
