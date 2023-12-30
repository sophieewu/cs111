#include <iostream>
using namespace std;

int main(){
	double f;
	cout << "Please enter temperature in Fahrenheit: ";
	cin >> f;

	cout << f << " degrees in Fahrenheit = " << 5.0 / 9 * (f - 32) << " degrees in Centigrade" << endl;

	return 0;
}
