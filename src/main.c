#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/atm.h"
#include "../include/user.h"

int main() {
    char username[20], password[20];
    double balance = 1000.00;
    int choice;
    double amount;

    printf("ATM Login:\nUsername: ");
    scanf("%s", username);
    printf("Password: ");
    scanf("%s", password);

    if (!login(username, password)) {
        printf("Login failed!\n");
        return 1;
    }

    do {
        show_menu();
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                check_balance(balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%lf", &amount);
                balance = deposit(balance, amount);
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%lf", &amount);
                balance = withdraw(balance, amount);
                break;
            case 4:
                printf("Exiting ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
