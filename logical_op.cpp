#include <iostream>
using namespace std;

int main(){
    int x = 100;

    // check if x is a 2-digit number
    // try x = 20 and then x =100
    if (x >= 10 && x <= 99)
        cout << "x is a 2-digit number." << endl;
    else
        cout << "x is not a 2-digit number." << endl;
  
    x = 100;
    if (x < 10 || x > 99)
        cout << "x is not a 2-digit number." << endl;
    else
        cout << "x is a 2-digit number." << endl;

    // 10 <= x <= 99 is not a correct condition
    // to check if a number is 2-digit
    // try x = 100
    if (10 <= x <= 99 )
        cout << "x is a 2-digit number." << endl;
    else
        cout << "x is not a 2-digit number." << endl;
  
    double payRate = 15.0;
  
    if (!(payRate >= 15))
        cout << "$" << payRate <<": Not legal hourly pay rate." << endl;
    else
        cout << "$" << payRate <<": Legal hourly pay rate." << endl;

    if (!(x >= 10 && x <= 99))
        cout << x << " is not a 2-digit number." << endl;
    else
        cout << x << " is a 2-digit number." << endl;

    if (x % 2 == 0 || x % 5 == 0)
        cout << x << " is divisible by 2 or 5." << endl;


    return 0;
}