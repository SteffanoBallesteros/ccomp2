#include<iostream>
#include<string>
using namespace std;
class Account{
    public:
        Account(string firstName,string lastName,unsigned int accountNumber, double initialBalance)
            :name(firstName), lastname(lastName), accountnumber(accountNumber) {
 
            if(initialBalance > 0){
                balance = initialBalance;

            }
        }

        void deposit(double depositAmount){
            if(depositAmount>0){ 
                balance = balance + depositAmount; 
            }
        } 

        double getBalance() const{
            return balance;   
        } 

        void setName(string firstName){
            name = firstName; 
        }  

        string getName() const{
            return name;
        }

        void setLastname(string lastName){
            lastname = lastName;
        }

        string getLastname() const{
            return lastname;
        }

        void setaccountnumber(unsigned int accountNumber){
            accountnumber = accountNumber;
        }

        unsigned int getaccountnumber() const{
            return accountnumber;
        }



        //modificando con la funcion retirar
        void withdraw(int with_draw){ 
            if(with_draw<=balance){ 
                balance = balance - with_draw;
            } 
            else{
                cout << "Withdrawal amount excceded acount balance";
            }
        }

        //fin de la modificacion
    private:
        string name; 
        double balance{0};
        string lastname;
        unsigned int accountnumber;
};
