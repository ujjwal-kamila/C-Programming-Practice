#include <stdio.h>
#include <string.h>

    typedef struct BankAccount {
    int accountNo;
    char name[100];
 }  acc ;

    int main() {
    acc acc1 = {123, "Ujjwal"};
    acc acc2 = {124, "Raj"};
    acc acc3 = {125, "Rudra"};
    printf("Account no = %d\n", acc1.accountNo);
    printf("Name of the account holder = %s\n", acc1.name);

    printf("Account no = %d\n", acc2.accountNo);
    printf("Name of the account holder = %s\n", acc2.name);

    printf("Account no = %d\n", acc3.accountNo);
    printf("Name of the account holder = %s\n", acc3.name);
    


    return 0;
}
