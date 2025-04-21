#ifndef ATM_H
#define ATM_H

void show_menu();
void check_balance(double balance);
double deposit(double balance, double amount);
double withdraw(double balance, double amount);

#endif
