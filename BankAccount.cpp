#include "BankAccount.h"
BankAccount::BankAccount(const std::string& owner, double balance)
: owner(owner), balance(balance) {}
double BankAccount::getBalance() const { return balance; }
// TODO Student A: implement deposit()
bool BankAccount::withdraw(double amount) {
    if (amount <= 0 || amount > balance) {
        return false;
}
    balance -= amount;
    return true;
}