#include <iostream>
#include <array>
#include <algorithm>
#include <iomanip>

const int NUM_MONTHS = 12;

using namespace std;

void calculateSalesReport(const double *sales, int size, double *totalSales, double *averageSales, double *maxSale, double *minSale)
{
    *totalSales = 0.0;
    for (int i = 0; i < size; i++)
    {
        *totalSales += sales[i];
    }

    *averageSales = *totalSales / size;

    *maxSale = *max_element(sales, sales + size);
    *minSale = *min_element(sales, sales + size);
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
    calculateSalesReport(sales.data(), sales.size(), &totalSales, &averageSales, &maxSale, &minSale);

    cout << "Report of Sales\n";
    cout << "----------------\n";
    cout << "Total Sales : " << totalSales << endl;
    cout << "Average : " << fixed << setprecision(2) << averageSales << endl;
    cout << "Maximum Value : " << maxSale << endl;
    cout << "Minimum Value : " << minSale << endl;
    return 0;
}