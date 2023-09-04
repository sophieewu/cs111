#include <iostream>
using namespace std;

int main(){
    // Print 5 stars on separate lines using a while loop
    int counter = 1;
    while (counter <= 5){
        cout << "*" << endl;
        counter++;
    }
    cout << endl;

    // Print 3 stars on a line using a while loop
    counter = 3;
    while (counter > 0){
        cout << "*";
        counter--;
    }
  
    return 0;
}