#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Sales
{
private:
    string product;
    int quantity;
    double price;
    double discount;

public:
    Sales(string product, int quantity, double price, double discount)
    {
        this->product = product;
        this->quantity = quantity;
        this->price = price;
        this->discount = discount;
    }

    void displaySale()
    {
        cout << "Product: " << product << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price: $" << price << endl;
        cout << "Discount: " << discount << "%" << endl;
    }
};

class SpecialSales : public Sales //  subclass that inherits from the Sales class
{
private:
    string specialSaleReason;

public:
    SpecialSales(string product, int quantity, double price, double discount, string specialSaleReason)
        : Sales(product, quantity, price, discount)
    {
        this->specialSaleReason = specialSaleReason;
    }

    void displaySpecialSale()
    {
        displaySale(); // Accessing base class member function
        cout << "Special Sale Reason : " << specialSaleReason << endl;
    }
};

int main()
{
    Sales regularSale("Product 1", 5, 10.99, 10);
    regularSale.displaySale();
    cout << "\n==================================\n\n" ;
    SpecialSales specialSale("Product 2", 3, 7.99, 15, "Limited Time Offer");
    specialSale.displaySpecialSale();

    return 0;
}