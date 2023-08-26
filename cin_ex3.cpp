#include <iostream>
using namespace std;

int main(){
    string name;
    int luckyNum;
  
    // Prompt user to provide name and lucky number
    cout << "Hi, what are your name and lucky number? ";
  
    // cin >> name; // Read the input from user and store it in the variable name
    // cin >> luckyNum;//Read the value and store it in luckyNum
  
    // cout << "Hi, " << name << "!" << endl;
    // cout << "Your lucky number is " << luckyNum << endl;

    // Combine lines 11 and 12 so that the values of name and lucky number are read at once
    cin >> name >> luckyNum;

    // Combine lines 14 and 15 so that it outputs name and lucky number in a line
    cout << "Hi, " << name << "! Your lucky number is " << luckyNum << endl;


    return 0;
}
