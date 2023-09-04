#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Give me an odd number: ";
    cin >> n;

    while (n % 2 != 1){
        cout << "Bad input. Give me an odd number: ";
        cin >> n;
    }

    cout << n << " is an odd number." << endl;

    return 0;
}
