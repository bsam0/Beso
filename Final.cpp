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

    string getProduct()
    {
        return product;
    }

    int getQuantity()
    {
        return quantity;
    }

    double getPrice()
    {
        return price;
    }

    double getDiscount()
    {
        return discount;
    }

    double getTotalPrice()
    {
        double totalPrice = quantity * price;
        double discountAmount = totalPrice * (discount / 100);
        return totalPrice - discountAmount;
    }

    double getProfit()
    {
        double cost = quantity * price;
        double sellingPrice = getTotalPrice();
        return sellingPrice - cost;
    }

    double getProfitPercentage()
    {
        double cost = quantity * price;
        double sellingPrice = getTotalPrice();
        double profit = sellingPrice - cost;
        return (profit / cost) * 100;
    }

    static double calculateProfitPercentage(double price, int quantity)
    {
        double cost = quantity * price;
        double sellingPrice = price * quantity;
        double profit = sellingPrice - cost;
        return (profit / cost) * 100;
    }

    static double calculateLossPercentage(double price, int quantity)
    {
        double cost = quantity * price;
        double sellingPrice = price * quantity;
        double loss = cost - sellingPrice;
        return (loss / cost) * 100;
    }
};

class SalesManager
{
private:
    vector<Sales> salesList;

public:
    void addSale(string product, int quantity, double price, double discount)
    {
        Sales sale(product, quantity, price, discount);
        salesList.push_back(sale);
    }

    double getTotalSales()
    {
        double totalSales = 0;
        for (Sales sale : salesList)
        {
            totalSales += sale.getTotalPrice();
        }
        return totalSales;
    }

    double getTotalProfit()
    {
        double totalProfit = 0;
        for (Sales sale : salesList)
        {
            totalProfit += sale.getProfit();
        }
        return totalProfit;
    }

    void displaySales()
    {
        cout << "Product\t\tQuantity\tPrice\tDiscount\tTotal Price\tProfit\tProfit %" << endl;
        for (Sales sale : salesList)
        {
            cout << sale.getProduct() << "\t" << sale.getQuantity() << "\t\t" << sale.getPrice() << "\t" << sale.getDiscount() << "\t\t" << sale.getTotalPrice() << "\t\t" << sale.getProfit() << "\t" << sale.getProfitPercentage() << "%" << endl;
        }
    }
};

int main()
{
    SalesManager salesManager;

    salesManager.addSale("Product 1", 5, 10.99, 10);
    salesManager.addSale("Product 2", 3, 7.99, 15);
    salesManager.addSale("Product 3", 2, 3.99, 5);

    cout << "Total Sales: $" << salesManager.getTotalSales() << endl;
    cout << "Total Profit: $" << salesManager.getTotalProfit() << endl;

    salesManager.displaySales();

    cout << "Profit percentage of Product 1: " << Sales::calculateProfitPercentage(10.99, 5) << "%" << endl;
    cout << "Loss percentage of Product 2: " << Sales::calculateLossPercentage(7.99, 3) << "%" << endl;
    
    return 0;
}
