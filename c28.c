/*
Question:
Design a menu-driven banking application that allows users
to deposit money, withdraw money, check balance, and exit the program.
*/

#include <stdio.h>

int main()
{
    int choice;
    float balance = 0.0, amount;

    do
    {
        printf("\n--- Banking Menu ---\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);

                if (amount > 0)
                {
                    balance = balance + amount;
                    printf("Amount deposited successfully.");
                }
                else
                {
                    printf("Invalid amount.");
                }
                break;

            case 2:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if (amount > 0 && amount <= balance)
                {
                    balance = balance - amount;
                    printf("Amount withdrawn successfully.");
                }
                else
                {
                    printf("Insufficient balance or invalid amount.");
                }
                break;

            case 3:
                printf("Current Balance = %.2f", balance);
                break;

            case 4:
                printf("Thank you for using the banking application.");
                break;

            default:
                printf("Invalid choice.");
        }

    } while (choice != 4);

    return 0;
}
