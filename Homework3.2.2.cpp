#include <iostream>
using namespace std;
struct BankAccount {
    int accountNumber;
    std::string ownerName;
    double balance;
};

void changeBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main() {
    BankAccount account;
    std::cout << "Введите номер счёта: ";
    std::cin >> account.accountNumber;
    std::cout << "Введите имя владельца: ";
    std::cin >> account.ownerName;
    std::cout << "Введите баланс: ";
    std::cin >> account.balance;

    double newBalance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;

    changeBalance(account, newBalance);
    std::cout << "Ваш счет: " << account.ownerName << "," << account.accountNumber << "," <<
        account.balance << std::endl;
    return 0;
}