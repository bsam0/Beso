#include "sales.h"
#include <iostream>

Sales::Sales(std::string product, int quantity, double price, double discount)
{
    this->product = product; // this-> is used to access members (variables or functions) of the current object
    this->quantity = quantity;
    this->price = price;
    this->discount = discount;
}

std::string Sales::getProduct()
{
    return product;
}

int Sales::getQuantity()
{
    return quantity;
}

double Sales::getPrice()
{
    return price;
}

double Sales::getDiscount()
{
    return discount;
}

double Sales::getTotalPrice()
{
    double totalPrice = quantity * price;
    double discountAmount = totalPrice * (discount / 100);
    return totalPrice - discountAmount;
}

double Sales::getProfit()
{
    double cost = quantity * price;
    double sellingPrice = getTotalPrice();
    return sellingPrice - cost;
}

double Sales::getProfitPercentage()
{
    double cost = quantity * price;
    double sellingPrice = getTotalPrice();
    double profit = sellingPrice - cost;
    return (profit / cost) * 100;
}

double Sales::calculateProfitPercentage(double price, int quantity)
{
    double cost = quantity * price;
    double sellingPrice = price * quantity;
    double profit = sellingPrice - cost;
    return (profit / cost) * 100;
}

double Sales::calculateLossPercentage(double price, int quantity)
{
    double cost = quantity * price;
    double sellingPrice = price * quantity;
    double loss = cost - sellingPrice;
    return (loss / cost) * 100;
}

void SalesManager::addSale(std::string product, int quantity, double price, double discount)
{
    Sales sale(product, quantity, price, discount);
    salesList.push_back(sale);
}

double SalesManager::getTotalSales()
{
    double totalSales = 0;
    for (Sales sale : salesList)
    {
        totalSales += sale.getTotalPrice();
    }
    return totalSales;
}

double SalesManager::getTotalProfit()
{
    double totalProfit = 0;
    for (Sales sale : salesList)
    {
        totalProfit += sale.getProfit();
    }
    return totalProfit;
}

void SalesManager::displaySales()
{
    std::cout << "Product\t\tQuantity\tPrice\tDiscount\tTotal Price\tProfit\tProfit %" << std::endl;
    for (Sales sale : salesList)
    {
        std::cout << sale.getProduct() << "\t" << sale.getQuantity() << "\t\t" << sale.getPrice() << "\t" << sale.getDiscount() << "\t\t" << sale.getTotalPrice() << "\t\t" << sale.getProfit() << "\t" << sale.getProfitPercentage() << "%" << std::endl;
    }
}