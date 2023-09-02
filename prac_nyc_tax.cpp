#include <iostream>
using namespace std;

int main(){
	double unitPrice;
	cout << "Enter unit price: $ ";
	cin >> unitPrice;

	double tax = 0.;

	if (unitPrice >= 110) 
		tax = unitPrice * 0.08875;

	cout << "Subtotal: $ " << unitPrice << endl;
        cout << "Sales tax: $ " << tax << endl;
        cout << "Total: $ " << unitPrice + tax << endl;

	return 0;
}
