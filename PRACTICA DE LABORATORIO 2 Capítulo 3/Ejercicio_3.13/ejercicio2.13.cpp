#include <iostream>
#include "Account.h"
using namespace std;

void displayAccount(Account accountToDisplay);


void displayAccount(Account accountToDisplay) {
            cout << "Account: " << accountToDisplay.getName() << " balance is $" << accountToDisplay.getBalance() << endl;
        }


int main(){
    Account account1{"Stefano Ballesteros",50};
    Account account2{"Pachito Blue",-7};
    displayAccount(account1);
    displayAccount(account2);

    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account1 balance "<< endl;
    account1.deposit(depositAmount);

    displayAccount(account1);
    displayAccount(account2);

    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account2 balance " << endl;
    account2.deposit(depositAmount);

    displayAccount(account1);
    displayAccount(account2);

    cout << "\n\nHow much do you want to withdraw account1?: ";
    int with_draw_cash;
    cin >> with_draw_cash;
    if(with_draw_cash < account1.getBalance()){
        cout << "Withdrawing " << with_draw_cash << " to account1 balance\n ";
    }
    account1.withdraw(with_draw_cash);

    cout << "\n\nHow much do you want to withdraw account2?: ";
    cin >> with_draw_cash;
    if(with_draw_cash < account2.getBalance()){
        cout << "Withdrawing " << with_draw_cash << " to account1 balance\n "<< endl;
    }
    account2.withdraw(with_draw_cash);

    displayAccount(account1);
    displayAccount(account2);

    return 0;
}


