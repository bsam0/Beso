#include "sales.h"
#include <iostream>

using namespace std;

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