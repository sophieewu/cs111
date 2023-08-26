#include <iostream>
using namespace std;

int main(){
    int a = 76598; // Declare a and initialize it to 76598
    int b; // Declare b and compile assigns an initial value.

    cout << a/10 << endl; // Print the result of removing the last digit from a
    cout << a/100 << endl; // Print the result of removing the last 2 digits from a
    cout << a%10 << endl; // Print the last digit of a
    cout << a%100 << endl; // Print the last 2 digits of a

    cout << "b = " << b << endl;
    b = a/100%10; // set b to the third digit of a
    cout  << "b = " << b << endl;
  
    a = a/1000; // replace a by the first two digits of a
    cout << "a = " << a << endl;

    cout << b*b-a << endl; // print the result of b^2 - a
  
    return 0;
}
