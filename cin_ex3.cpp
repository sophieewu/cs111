// Author: Shu-Yuan Wu
// CUNY ID#: 12345678

#include <iostream>
using namespace std;

int main(){
  string name;
  int luckyNum;
  
  // Prompt user to provide name and lucky number
  cout << "Hi, what are your name and lucky number? ";
  cin >> name; // Read the input from user and store it in the variable name
  cout << "Hi, " << name << "!" << endl;

  cin >> luckyNum;//Read the value and store the it in luckyNum
  cout << "Your lucky number is " << luckyNum << endl;

  return 0;
}
