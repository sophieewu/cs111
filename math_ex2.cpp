#include <iostream>
using namespace std;

/* EXAMPLE 
   At orchard, the bulk price for apples is $1.75 per pound.
   Write a complete C++ program that does the following:
   1) Prompt user to enter how many pounds of apples are purchased
   2) Read the value entered by user
   3) Calculate the total cost of the purchase
   4) Print the total cost.
*/

int main(){
    double unitPrice = 1.75; 
    double pounds;
    double total = 0.;
  
    // 1) Prompt user to enter how many pounds of apples are purchased
    cout << "Please enter # pounds of apples purchased: ";
  
    // 2) Read the value entered by user
    cin >> pounds;
  
    // 3) Calculate the total cost
    total = unitPrice * pounds;
  
    // 4) Output the total cost
    cout <<"Purchase Price: $"<< total <<endl;

    // You may combine task 3 & 4
    //cout <<"Purchase Price: $"<< unitPrice * pounds <<endl; 

  return 0;
}