#include "BankAccount.h"
BankAccount::BankAccount(const std::string& owner, double balance)
: owner(owner), balance(balance) {}
double BankAccount::getBalance() const { return balance; }
// TODO Student A: implement deposit()
// TODO Student B: implement withdraw()