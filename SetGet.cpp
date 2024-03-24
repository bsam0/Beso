#include <iostream>
using namespace std;

class Sales
{
private:
    int Product_Id;
    double price;
    int quantity;

public:
    void SetProduct(int ID)
    {
        Product_Id = ID;
    }
    int GetProduct()
    {
        return Product_Id ;
    }
    void SetPrice (double PRI)
    {
        price = PRI;
    }
    double GetPrice ()
    {
        return price ;
    }
    void SetQuantity(int QUAN)
    {
        quantity = QUAN;
    }
    int GetQuantity()
    {
        return quantity;
    }

    double Calculate_Total_Sales()
    {
        return price * quantity;
    }

    void Display_Sales()
    {
        cout << "Product ID: " << Product_Id;
        cout << "\nPrice: " << price << "$\n";
        cout << "Quantity: " << quantity ;
        cout << "\nTotal Sales: " << Calculate_Total_Sales() << "$\n";
    }
};

int main()
{
    Sales sale1;
    sale1.SetProduct(9592);
    sale1.SetPrice(500);
    sale1.SetQuantity(5);

    sale1.Calculate_Total_Sales();
    sale1.Display_Sales();

    return 0;
}

class HW_4C
{
private:
    /* data */
public:
    HW_4C(/* args */);
    ~HW_4C();
};

HW_4C::HW_4C(/* args */)
{
}

HW_4C::~HW_4C()
{
}
