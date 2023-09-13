#include<iostream>
#include<string>
using namespace std;
class Account{
    public:
        Account(string accountName, int initialBalance)
            :name{accountName}{

            if(initialBalance > 0){
                balance = initialBalance;

            }
        }

        void deposit(int depositAmount){
            if(depositAmount>0){
                balance = balance + depositAmount;
            }
        }

        int getBalance() const{
            return balance;
        }

        void setMane(string accountName){
            name = accountName;
        }

        string getName() const{
            return name;
        }
        //modificando con la funcion retirar
        void withdraw(int with_draw){
            if(with_draw<balance){
                balance = balance - with_draw;
            } 
            else{
                cout << "Withdrawal amount excceded acount balance";
            }
        }

        //fin de la modificacion
    private:
        string name;
        int balance{0};
};
