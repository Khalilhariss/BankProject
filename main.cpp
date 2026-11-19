#include "BankAccount.h"
#include <iostream>
int main() {
    BankAccount account("Alice", 1000);
    std::cout << account.getBalance() << '\n';
    return 0;
}