#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>
class BankAccount {
    private:
    std::string owner;
    double balance;
    public:
    BankAccount(const std::string& owner, double balance);
    double getBalance() const;
    void deposit(double amount); // Student A
    bool withdraw(double amount); // Student B
};
#endif