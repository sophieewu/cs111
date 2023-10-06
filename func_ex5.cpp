#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool isEven(int n){
    return (n % 2 == 0);
}

int random(int x, int y){
    int min = x, max = y;
    if (x > y) {
        min = y;
        max = x;
    }
    return rand() % (max - min + 1) + min;
}

int main() {
    int numEvens = 0;
    srand(time(0));
    
    // generate and print 5 random numbers in ranges of: 10-19, 20-29, 30-39, 40-49, 50-59
    // and count # evens
    for (int i = 1; i <= 5; ++i){
        int num = random(10*i, 10*(i+1)-1);
        cout << num << " ";
        if (isEven(num)) ++numEvens;
    }
    cout << endl;
    cout << numEvens << " even numbers are generated." << endl;  
    return 0;
}
