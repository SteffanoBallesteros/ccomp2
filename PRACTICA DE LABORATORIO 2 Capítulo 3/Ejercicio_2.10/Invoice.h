#include <string>
using namespace std;

class Invoice{
    public:
    //INICIALIZAR LAS VARIABLES FUERA DEL CONSTRUCTOR
        Invoice(string part_number,string description, int quantity, int pr):
        a_part_number(part_number), part_description(description),a_quantity_of_the_item_being_purchased(quantity),price_per_item(pr), VAT(0.2),discount(0){

        }

        void setPartnumber(string part_number){
            a_part_number = part_number; 
    
        }

        void setDescription(string description){
            part_description = description;
        }

        void setQuantity(int quantity){
            if(quantity > 0){
                a_quantity_of_the_item_being_purchased = quantity;
            }
        }

        void setPrice(int price){
            if(price > 0){
                price_per_item = price;
            }
        }

        void setVat(double vx){
            if (vx > 0){
                VAT = vx;
            }
        }

        void setDiscount(double ds){
            if(ds > 0){
                discount = ds;
            }
        }

        string getpartnumber() const{
            return a_part_number;
        }

        string getdescription() const{
            return part_description;
        }

        int getquantity() const {
            return a_quantity_of_the_item_being_purchased;
        }

        int getprice(){
            return price_per_item;
        }

        double getvax() const{
            return VAT;
        }

        double getdiscount() const{
            return discount;
        }

        double getInvoiceAmount () const{
            return (a_quantity_of_the_item_being_purchased*price_per_item);
        }

    private:
        string a_part_number;
        string part_description;
        int a_quantity_of_the_item_being_purchased;
        int price_per_item;
        double VAT;
        double discount;
};