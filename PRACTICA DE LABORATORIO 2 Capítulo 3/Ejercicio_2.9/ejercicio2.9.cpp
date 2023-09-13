#include <iostream>
#include "Account.h"
using namespace std;

int main(){
    Account account1{"Stefano Ballesteros",50};
    Account account2{"Pachito Blue",-7};

    cout << "Acount1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\nAcount2: " << account2.getName() << " balance is $" << account2.getBalance();

    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding " << depositAmount << "to account1 balance";
    account1.deposit(depositAmount);

    cout << "\n\naccount1: " << account1.getName() << " balance is $"<<account1.getBalance();
    cout << "\n\naccount2: " << account2.getName() << " balance is $"<<account2.getBalance();

    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << "to account2 balance";
    account2.deposit(depositAmount);

    cout << "\n\naccount1: " << account1.getName() << " balance is $"<<account1.getBalance();
    cout << "\n\naccount2: " << account2.getName() << " balance is $"<<account2.getBalance();

    cout << "\n\nHow much do you want to withdraw account1?: ";
    int with_draw_cash;
    cin >> with_draw_cash;
    if(with_draw_cash < account1.getBalance()){
        cout << "Withdrawing " << with_draw_cash << " to account1 balance";
    }
    account1.withdraw(with_draw_cash);

    cout << "\n\nHow much do you want to withdraw account2?: ";
    cin >> with_draw_cash;
    if(with_draw_cash < account2.getBalance()){
        cout << "Withdrawing " << with_draw_cash << " to account1 balance";
    }
    account2.withdraw(with_draw_cash);

    cout << "\n\naccount1: " << account1.getName() << " balance is $"<<account1.getBalance();
    cout << "\n\naccount2: " << account2.getName() << " balance is $"<<account2.getBalance();

    return 0;
}