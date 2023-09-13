#include <iostream>
#include <cmath> // support sqrt function
using namespace std;

int main(){
	double a, b, c, p, area;

	cout << "Enter lengths of three sides of a triangle separated by space: ";
	cin >> a >> b >> c;
	if (!(b + c > a && a + c > b&& a + b > c)){
		cout << "Invalid input!" << endl;
		exit(0);
	}
	p = (a + b + c) / 2;
	area = sqrt(p * (p-a) * (p-b) * (p-c));
	cout << "Area of triangle: " << area << endl;

	return 0;
}
