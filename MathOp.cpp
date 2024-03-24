#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4, num5 , sum , multi , average , large , small ;
    cout << "Enter the nums : \n" ; 
    cin >> num1 >> num2 >> num3 >> num4 >> num5 ;
    sum = num1 + num2 + num3 + num4 + num5 ; 
    multi = num1 * num2 * num3 * num4 * num5 ; 
    average = sum/5 ;
    small = large = num1 ; 

    if (num2 < small){small = num2;}
    if (num3 < small){small = num3;}
    if (num4 < small){small = num4;}
    if (num5 < small){small = num5;}

    if (num2 > large){large = num2;}
    if (num3 > large){large = num3;}
    if (num4 > large){large = num4;}
    if (num5 > large){large = num5;}
    
    cout << "the sum is " << sum << endl ; 
    cout << "the product is " << multi << endl ; 
    cout << "the average is " << average << endl ; 
    cout << "the smallest is " << small << endl ; 
    cout << "the biggest is " << large << endl ; 
}
