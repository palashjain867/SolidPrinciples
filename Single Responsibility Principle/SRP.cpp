#include "string"
#include "iostream"

class Invoice{

    public:
        std::string itemName;
        int quantity;
        float pricePerItem;

        Invoice(std::string name, int quant, float price): itemName(name), quantity(quant), pricePerItem(price)
        {};
};

class InvoiceSaver{
    public:
        void save(Invoice& obj)
        {
            std::cout <<"Saving Invoice to a file" <<std::endl;
        }
};

class InvoicePrinter{
    public:
        void print(Invoice& obj)
        {
            std::cout<<"Printing Invoice ......." << std::endl;
            std::cout<<"Item Name : " << obj.itemName << std::endl;
            std::cout<<"Item Quantity :" << obj.quantity << std::endl;
            std::cout<<"Item Price :" << obj.pricePerItem << std::endl;
            std::cout<<"Total Price :" << obj.quantity * obj.pricePerItem << std::endl;
        }
};

int main()
{
    Invoice obj = Invoice("Biscuit", 5, 10.0);
    InvoicePrinter prt;
    prt.print(obj);

    return 0;
}