#include <iostream>
using namespace std;

int main(){
  string light = "green";
  int x = 3, y = 5;
  cout << "x == 5: " << (x == 5) << endl;
  cout << "light == \"green\": " << (light == "green") << endl;
  cout << "x != y: " << (x != y) << endl;
  cout << "light != \"green\": " << (light != "green") << endl;
  cout << "x < y: " << (x < y) << endl;
  cout << "x <= 5: " << (x <= 5) << endl;
  cout << "3 > y: " << (3 > y) << endl;
  cout << "3 >= y: " << (3 >= y) << endl;

  return 0;
}