/*  
    Find PI to the Nth Digit - 
    Enter a number and have the program generate PI up to that many decimal places. 
    Keep a limit to how far the program will go.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Function prototype
void computePi(int n);

// Driver code
int main()
{
    int piDecimal = 0;
    
    cout << "This program finds Pi to the nth digit.\n"
            "Please enter a number less than or equal to 40: ";
            
    cin >> piDecimal;
    cout << "\n";
    
    while(piDecimal > 40)
    {
        cout << "The number must be less than or equal to 40.\n"
                "Please enter a number one more time: ";
                
        cin >> piDecimal;
        cout << "\n";
    }
    cout << "\n";
    
    computePi(piDecimal);
    
    return 0;
}

// Computes Pi to the nth digit
void computePi(int n)
{
    double pi = 2*acos(0.0);
    
    cout << fixed << setprecision(n) << pi << endl;
}
