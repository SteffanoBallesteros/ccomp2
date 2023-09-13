#include<iostream>
#include <string>
#include "Invoice.h"
using namespace std;

int main(){
    Invoice invoice ("54923", "Fierros", 30,50); // creo un objeto invoice para colocarle parametros 

    cout << "Numero de pieza: " << invoice.getpartnumber() << endl;
    cout << "Descripcion: " << invoice.getdescription() << endl;
    cout << "Cantidad: " << invoice.getquantity() << endl;
    cout << "Precio por item: "<< invoice.getprice() << endl;
    cout << "VAT: " <<  invoice.getvax() << endl;

        cout << "\nSi usted compra más de 10 items, tiene un descuento de 0.5%, si compra más de 20 items, el descuento es de 0.75%" << endl; 

    if ((invoice.getquantity() > 10) && (invoice.getquantity() < 20)){
        invoice.setDiscount(0.5);
        cout << "\nDescuento: " << invoice.getdiscount() << endl;
    }
    else if((invoice.getquantity() >= 20)){
        invoice.setDiscount(0.75); 
        cout << "\nDescuento: " << invoice.getdiscount() << endl;
    }
    else{
        cout << "\nNo tiene descuento" << endl;
    }

    //Monto de factura + vat (si hay descuento, aplicarlo)
    cout << "\nEl monto de factura es: " << invoice.getInvoiceAmount() << endl;
    double impuestos = invoice.getvax() * invoice.getInvoiceAmount();
    cout << "\nEl monto de factura es con la tasa de impuestos es: " << (invoice.getInvoiceAmount() + impuestos)<< endl; 
    if(invoice.getdiscount() > 0){
        cout << "\nEl monto de la factura con el descuento es de: " << (invoice.getInvoiceAmount() + invoice.getvax())*invoice.getdiscount()<< endl;    
    }
    else{
        cout << "\nUsted no obtuvo ningun descuento" << endl;
        cout << "\nEl monto de la factura más la tasa de impuestos se mantiene: " << (invoice.getInvoiceAmount() + invoice.getvax())<< endl;
    }

    return 0;
}