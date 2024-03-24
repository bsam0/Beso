#include<iostream>
#include <cmath>
using namespace std ; 
void Root ()
{

    float a, b, c, Root_1, Root_2, Delta, RealRoot, ImagineRoot;
    cout << "Enter The valuespf  [a , b , c ]: ";
    cin >> a >> b >> c ;
    Delta = b * b - 4 * a * c;

    if (Delta > 0)
    {
        Root_1 = (-b + sqrt(Delta)) / (2 * a);
        Root_2 = (-b - sqrt(Delta)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root_1 = " << Root_1 << endl;
        cout << "Root_2 = " << Root_2 << endl;
    }

    else if (Delta == 0)
    {
        cout << "Roots are real and same." << endl;
        Root_1 = -b / (2 * a);
        cout << "Root_1 = , Root_2 =" << Root_1 << endl;
    }

    else
    {
        RealRoot = -b / (2 * a);
        ImagineRoot = sqrt(-Delta) / (2 * a);
        cout << "Roots are complex (imaginary) and different." << endl;
        cout << "Root_1 = " << RealRoot << "+" << ImagineRoot << "i" << endl;
        cout << "Root_2 = " << RealRoot << "-" << ImagineRoot << "i" << endl;
    }
}
void Display_nums ()
{
    int x;
    for (x = 0; x <= 400; x++)
    {
        if (x % 9 == 0)
        {
            cout << "the nums is " << x << endl;
        }
    }
}
int main ()
{
    // Root();
    // Display_nums();
    return 0 ; 
}
