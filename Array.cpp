#include <iostream>
#include <array>
#include <algorithm> // to use some functions like minimum and maximum
#include <iomanip>

using namespace std;
string Line = "\n=================\tNew Program\t=================\n" ; 
void SwapArray()
{
    array<int, 4> arr1 = {1, 2, 3, 4};
    array<int, 4> arr2 = {5, 6, 7, 8};

    arr1.swap(arr2);

    cout << "arr1 values = ";

    for (size_t i = 0; i < arr1.size(); i++)
    {
        cout << arr1.at(i) << " ";
    }

    cout << "\narr2 values = ";

    for (size_t i = 0; i < arr2.size(); i++)
    {
        cout << arr2.at(i) << " ";
    }


}

//==================================================


const int NUM_MONTHS = 12;

void CalculateSales()
{
    array<double, NUM_MONTHS> sales; // array to store sales in every month

    for (int i = 0; i < NUM_MONTHS; i++)
    {
        cout << "Enter the Sales for every month " << i + 1 << " : ";
        cin >> sales[i];
    }

    double totalSales = 0.0;
    for (int i = 0; i < NUM_MONTHS; i++)
    {
        totalSales += sales[i];
    }

    double averageSales = totalSales / NUM_MONTHS;

    double maxSale = *max_element(sales.begin(), sales.end());
    double minSale = *min_element(sales.begin(), sales.end());

    cout << "Report of Sales\n";
    cout << "----------------\n";
    cout << "Total Sales : " << totalSales << endl;
    cout << "Average : " << fixed << setprecision(2) << averageSales << endl;
    cout << "Maximum Value : " << maxSale << endl;
    cout << "Minimum Value : " << minSale << endl;
}

int main ()
{
    SwapArray();
    cout << Line ; 
    CalculateSales();
    return 0 ; 
}