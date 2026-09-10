#include <stdio.h>

int main()
{
    int balance = 1000;
    int amount;
    int choice;
    int check;

    printf("-------WELCOME TO ATM MACHINE-------\n");

    for (;;)
    {
        printf("\nEnter your choice\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Your current balance is %d\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);

                balance = balance + amount;

                printf("Deposit successful.\n");

                printf("Do you want to check balance?\n");
                printf("1. Yes\n");
                printf("2. No\n");

                scanf("%d", &check);

                if (check == 1)
                {
                    printf("Your current balance is %d\n", balance);
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);

                if (amount > balance)
                {
                    printf("Insufficient balance!\n");
                    break;
                }

                balance = balance - amount;

                printf("Withdrawal successful.\n");

                printf("Do you want to check balance?\n");
                printf("1. Yes\n");
                printf("2. No\n");

                scanf("%d", &check);

                if (check == 1)
                {
                    printf("Your current balance is %d\n", balance);
                }
                break;

            case 4:
                printf("Thanks for using our ATM.\n");
                return 0;   // Exit the program

            default:
                printf("Invalid choice!\n");
        }
    }
}
