#include <iostream>
#include <string>
using namespace std;

class Date{
    public:
        Date(int m, int d, int y) :month(m), day(d), year(y){ 
            if (!isValid()) {
                month = 1;
            }   

        }

        void setmonth(int m){
            if((m>=1)&&(m<=12)){
                month = m; 
            }
            else{
                month = 1; 
            }
        }

        void setday(int d){
            if((d>0)&&(d<=31)){
                day = d;
            }
            else{
                day = 1;
            }
        }

        void setyear(int y){
            year = y; 
        }

        int getmonth() const{
            return month; 
        }

        int getday() const{
            return day; 
        }

        int getyear() const{
            return year; 
        }

        void displayDate(){
            cout << "Mostrando la fecha digitada" << endl;
            cout << getday() << "/" << getmonth() << "/" << getyear() << endl;
        }



    private:
         int month;
         int day; 
         int year; 

         bool isValid() const {
            return (month >= 1 && month <= 12);
        }
};