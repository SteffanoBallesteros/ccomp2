#include<iostream>
#include <string>
#include "Date.h"
using namespace std;

int main(){
    Date fecha1(12,30,2007);
    fecha1.displayDate();

    Date fecha2(13,29,2007); 
    fecha2.displayDate();
    return 0;
}