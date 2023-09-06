#include <iostream>
using namespace std;

int main(){
    double i = 1.1;
    int j; // compiler initialize it to 0

    i++; // equivalent to i = i + 1;
    ++i; // equivalent to i = i + 1;
    cout << i << endl;

    i--; // equivalent to i = i - 1;
    --i; // equivalent to i = i - 1;
    cout << i << endl;

    i+=4; // equivalent to i = i + 4;
    cout << i << endl;

    i-=2; // equivalent to i = i - 2;
    cout << i << endl;

    i*=2; // equivalent to i = i * 2;
    cout << i << endl;

    i/=2; // equivalent to i = i / 2;
    cout << i << endl;

    i+=j; // equivalent to i = i + j;
    cout << i << endl;

    cout << endl;

    j++;
    ++j;
    cout << j << endl;

    j--;
    --j;
    cout << j << endl;

    j+=4;
    cout << j << endl;

    j-=2;
    cout << j << endl;

    j*=2;
    cout << j << endl;

    j/=2;
    cout << j << endl;
  
    j%=2; // equivalent to j = j % 2;
    cout << j << endl;
  
    return 0;
}