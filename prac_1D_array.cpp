#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int a[10], b[20], counter = 0;
	double sum = 0, avg_overall;
	cout << "Enter 10 integers: ";
	for (int i = 0; i < 10; ++i){
		cin >> a[i];
		sum += a[i];
	}
	avg_overall = sum / 10;
	cout << "Sum is " << sum << " and overall average is " << avg_overall << endl;

	sum  = 0;
	cout << "Array elements that are >= the overall average: ";
	for (int i = 0; i < 10; ++i){
		if (a[i] >= avg_overall){
			cout << a[i] << " ";
			sum += a[i];
			++counter;
		}
	}
	cout << endl;
	cout << "Average of elements that are >= the overall average is " << sum/counter << endl;

	cout << endl;

	srand(time(0));
	cout << "Array: ";
	for (int i = 0; i < 20; ++i){
		b[i] = rand() % (20 - 1 + 1) + 1;
		cout << b[i] << " ";
	}
	cout << endl;

	cout << "Odd numbers starting from rear: ";
	for (int i = 19; i >= 0; --i)
		if (b[i] % 2 != 0) cout << b[i] << " ";
	cout << endl;

	cout << "Even numbers: ";
	for (int i = 0; i < 20; ++i)
		if (b[i] % 2 == 0) cout << b[i] << " ";
	cout << endl;

	cout << "Added 2 to every element: ";
	for (int i = 0; i < 20; ++i){
		b[i] += 2;
		cout << b[i] << " ";
	}
	cout << endl;

	int max = b[0], min = b[0];
	for (int i = 1; i < 20; ++i){
		if (b[i] > max) max = b[i];
		if (b[i] < min) min = b[i];
	}

	cout << "The largest element is " << max << endl;
	cout << "The smallest element is " << min << endl;

	return 0;
}
