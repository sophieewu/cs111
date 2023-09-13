#include <iostream>
#include <cstdlib> // library supports the srand() and rand() functions
#include <ctime> // library supports the time()function
using namespace std;

int main(){
    //Initialize a random number generator
    srand(time(0));//only calling once and initialize with current time

    /* Using the following formula to generate
        a random integer between min and max(inclusive)
        rand() % (max-min+1) + min
    */

    // generate a random number between 0 and 99
    int n = rand() % (99 - 0 + 1) + 0;
    cout << n << endl;

    // generate a 3-digit random number
    n = rand() % (999 - 100 + 1) + 100;
    cout << n << endl;

    // use a C++ function to generate a 2-digit number, n
    // and then print out all integers between 1 and n (inclusive)
    n = rand() % (99 - 10 + 1) + 10;
    for (int i = 1; i <= n; ++i)
        cout << i << " ";
    cout << endl;
  
    return 0;
}
