#include <iostream>
using namespace std;

int main(){
    int n = 0;
    while (n < 1) {
        cout << "Give me a positive integer: ";
        cin >> n;
    }
    
    // print n asterisks in a row
    for (int i = 0; i < n; ++i)
        cout << "*";
    cout << endl;

    // Print a line of n letters: A in the odd column and B in the even column
    for (int i = 1; i <= n; ++i){
        if (i % 2 != 0) cout << "A";
        else cout << "B";
    }
    cout << endl;

    // Print 0 to n separated by space
    for (int i = 0; i <= n; ++i)
        cout << i << " ";
    cout << endl;
  
    // print the total of 1 + ...... + n
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    cout << "Sum of the first " << n << " positive integers = " << sum << endl;

    //print the product of 1 x ... x n
    int product = 1;
    for (int i = 1; i <= n; i++)
        product *= i;
    cout << "Product of the first " << n << " positive integers = " << product << endl;


    // print the sum of 1*1 + 2*2 + 3*3
    sum = 0;
    for (int i = 1; i <= 3; i++)
        sum += i*i;
    cout << "Sum of squares of the first 3 positive integers = " << sum << endl;

    //print the product of 1x3x5
    product = 1;
    for (int i = 1; i <= 3; i++)
        product *= (2*i-1);
    cout << "Product of the first three positive odd numbers = " << product << endl;

    //alternate way to print the product of 1x3x5
    product = 1;
    for (int i = 1; i <= 5; i+=2)
        product *= i;
    cout << "Product of the first three positive odd numbers = " << product << endl;

    return 0;
}