#include <iostream>
using namespace std;

void reverse(int n){
	while (n > 0) {
		cout << n % 10;
		n /= 10;
	}
	cout << endl;
}

double quadratic(double a, double b, double c, double x){
	return a*x*x + b*x + c;
}

void swap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}

void sort(int &a, int &b, int &c){
	if (a > b) swap(a, b);
	if (b > c) swap(b, c);
	if (a > b) swap(a, b);
}

int difference(int n){
	int max = n%10, min = max;
	while (n > 0){
		int lastDigit = n % 10;
		if (lastDigit > max) max = lastDigit;
		if (lastDigit < min) min = lastDigit;
		n /= 10;
	}
	return max - min;
}

int main(){
	int a = 8, b = 2, c = 1;
	reverse(12345);
	cout << quadratic(1.0, 2.0, 1.2, 2.0) << endl;
	sort(a, b, c);
	cout << a << b << c << endl;
	cout << difference(12098) << endl;
	cout << difference (11) << endl;
	return 0;
}
