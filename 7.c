#include <stdio.h>

typedef struct bankaccount {
    char name[50];
    float balance;
} bankaccount;

void deposit(bankaccount *acc1, float dm) {
    acc1->balance += dm;
    printf("Deposited %.2f\n", dm);
    printf("Current balance: %.2f\n", acc1->balance);
}

void withdraw(bankaccount *acc1, float wm) {
    if (wm > 0 && wm <= acc1->balance) {
        acc1->balance -= wm;
        printf("Withdrawn %.2f\n", wm);
        printf("Remaining balance: %.2f\n", acc1->balance);
    } else if (wm <= 0) {
        printf("Invalid withdrawal amount\n");
    } else {
        printf("Insufficient balance for withdrawal\n");
    }
}

void accountDetails(bankaccount *acc1) {
    printf("Account Holder Name: %s\n", acc1->name);
    printf("Current Balance: %.2f\n", acc1->balance);
}

int main() {
    bankaccount acc1; 
    float dm, wm;
    printf("Enter account holder's name: ");
    fgets(acc1.name, sizeof(acc1.name), stdin);
    acc1.name[strcspn(acc1.name, "\n")] = '\0';
    acc1.balance = 4457.55; 
    printf("Enter how much you want to deposit: ");
    scanf("%f", &dm);
    deposit(&acc1, dm);
    printf("Enter how much you want to withdraw: ");
    scanf("%f", &wm);
    withdraw(&acc1, wm);
    accountDetails(&acc1);
    return 0;
}

