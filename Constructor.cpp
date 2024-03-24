#include <iostream>
using namespace std;

class Sales
{
private:
    int Product_Id;
    double price;
    int quantity;

public:
    Sales(int ID, double PRI, int QUAN)
    {
        Product_Id = ID;
        price = PRI;
        quantity = QUAN;
    }

    double Calculate_Total_Sales()
    {
        return price * quantity;
    }

    void Display_Sales()
    {
        cout << "Product ID: " << Product_Id;
        cout << "\nPrice: " << price << "$\n";
        cout << "Quantity: " << quantity << ;
        cout << "\nTotal Sales: " << Calculate_Total_Sales() << "$\n";
    }
};

int main()
{
    Sales sales1(1, 10.99, 5);

    sales1.Display_Sales();

    return 0;
    +
}