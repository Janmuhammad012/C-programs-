#include<stdio.h>
int main(){
    int n1, n2, hcf;
    printf("Enter n1 and n2\n");
    scanf("%d%d", &n1, &n2);

    int r = 1;
    do{
        if(n1 % r == 0 && n2 % r == 0){
            hcf = r;
        }
        r++;
    }while(r <= n1 && r <= n2);

    printf("HCF of n1 and n2 = %d", hcf);
    return 0;
}
