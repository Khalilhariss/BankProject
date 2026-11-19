#include "BankAccount.h"
BankAccount::BankAccount(const std::string& owner, double balance)
: owner(owner), balance(balance) {}
double BankAccount::getBalance() const { return balance; }

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
    }
}
// TODO Student B: implement withdraw()

