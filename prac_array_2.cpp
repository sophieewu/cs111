#include <iostream>
using namespace std;

int main(){
	int n;

	cout << "How many rows? Please enter a positive integer that is at most 10: ";
	cin >> n;

	if (n < 1 || n > 10) exit(0);

	cout << "Please enter " << n << " row lengths: ";

	int stars[n] = {0};
	for (int i = 0; i < n; ++i)
		cin >> stars[i];

	for (int i = n - 1; i >= 0; --i){
		for (int j = 0; j < stars[i]; ++j)
			cout << "*";
		cout << endl;
	}

	return 0;
}

