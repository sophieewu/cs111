#include <iostream>
using namespace std;

int main(){
	int a[5];
	cout << "Enter five numbers: ";
	for (int i = 0; i < 5; ++i)
		cin >> a[i];

	int lastElement = a[4];
	for (int i = 4; i > 0; --i)
		a[i] = a[i-1];
	a[0] = lastElement;

	cout << "Shifted array: ";
	for (int i = 0; i < 5; ++i)
		cout << a[i] << " ";
	cout << endl;

	return 0;
}
