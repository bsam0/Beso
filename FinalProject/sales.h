#ifndef SALES_H
#define SALES_H

#include <string>
#include <vector>

class Sales
{
private:
    std::string product;
    int quantity;
    double price;
    double discount;

public:
    Sales(std::string product, int quantity, double price, double discount);
    std::string getProduct();
    int getQuantity();
    double getPrice();
    double getDiscount();
    double getTotalPrice();
    double getProfit();
    double getProfitPercentage();
    static double calculateProfitPercentage(double price, int quantity);
    static double calculateLossPercentage(double price, int quantity);
};

class SalesManager
{
private:
    std::vector<Sales> salesList;

public:
    void addSale(std::string product, int quantity, double price, double discount);
    double getTotalSales();
    double getTotalProfit();
    void displaySales();
};

#endif