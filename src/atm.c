#include <stdio.h>
#include "atm.h"

void show_menu() {
    printf("\nATM Menu:\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
}

void check_balance(double balance) {
    printf("Your current balance is: $%.2f\n", balance);
}

double deposit(double balance, double amount) {
    if (amount > 0) {
        balance += amount;
        printf("Deposited: $%.2f\n", amount);
    } else {
        printf("Invalid deposit amount.\n");
    }
    return balance;
}

double withdraw(double balance, double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("Withdrew: $%.2f\n", amount);
    } else {
        printf("Invalid or insufficient funds.\n");
    }
    return balance;
}
