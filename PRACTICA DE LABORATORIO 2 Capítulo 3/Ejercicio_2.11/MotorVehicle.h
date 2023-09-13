#include <iostream>
#include <string>
using namespace std;
class MotorVehicle{
    public: 
        MotorVehicle(string m, string type, int year, string Color, int capacity){
            make = m; 
            fuelType = type;
            yearOfManufacture = year;
            color = Color;
            engineCapacity = capacity;

        }
    void setMake(string m){
        m = make;  
    }

    void setFuelType(string type){
        type = fuelType;

    }

    void setyear(int year){
        year = yearOfManufacture;
    } 

    void setcolor(string Color){
        Color = color;  
    }
    void setcapacity(int capacity){
        capacity = engineCapacity;
    }

    string getmake() const{
        return make;
    }

    string getfuel() const{
        return fuelType;
    }

    int getyeat() const{
        return yearOfManufacture;
    
    }

    string getcolor() const{
        return color;
    }

    int getcapacity() const{
        return engineCapacity;
    }

    void displayCarDetails() {
        cout << "\nMake: " << make << endl; 
        cout << "\nFuelType: " << fuelType << endl;
        cout << "\nYearOfManufacture: " << yearOfManufacture << endl;
        cout << "\nColor: " << color << endl;
        cout << "\nEngineCapacity: " << engineCapacity << endl;
    }

    private:
        string make; 
        string fuelType; 
        int yearOfManufacture;
        string color; 
        int engineCapacity;   
};