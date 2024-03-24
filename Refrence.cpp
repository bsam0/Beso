#include <iostream>
#include <array>
#include <algorithm>
#include <iomanip>

using namespace std;

const int NUM_MONTHS = 12;

void calculateSalesReport
(const array<double,
    NUM_MONTHS> &sales,
    double &totalSales,
    double &averageSales,
    double &maxSale,
    double &minSale)
{
    totalSales = 0.0;
    for (int i = 0; i < NUM_MONTHS; i++)
    {
        totalSales += sales[i];
    }

    averageSales = totalSales / NUM_MONTHS;

    maxSale = *max_element(sales.begin(), sales.end());
    minSale = *min_element(sales.begin(), sales.end());
}

int main()
{
    array<double, NUM_MONTHS> sales; 

    for (int i = 0; i < NUM_MONTHS; i++)
    {
        cout << "Enter the Sales for every month " << i + 1 << ": ";
        cin >> sales[i];
    }

    double totalSales, averageSales, maxSale, minSale;
    calculateSalesReport(sales, totalSales, averageSales, maxSale, minSale);

    cout << "Report of Sales\n";
    cout << "----------------\n";
    cout << "Total Sales : " << totalSales << endl;
    cout << "Average : " << fixed << setprecision(2) << averageSales << endl;
    cout << "Maximum Value : " << maxSale << endl;
    cout << "Minimum Value : " << minSale << endl;

    return 0;
}