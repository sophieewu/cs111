#include <iostream>
using namespace std;

int main(){
    string name;
    int luckyNum;
  
    cout << "Hi, what is your name? "; // Prompt user to provide name
    cin >> name; // Read the input from user and store it in the variable name

    cout << "Hi, " << name << "!" << endl;

    // Prompt user to provide luckyNum
    cout << "What's your lucky number?";

    //Read the value and store it in the variable luckyNum
    cin >> luckyNum;
  
    return 0;
}
