#include <iostream>
using namespace std;

int main(){
	int n = 0;
        double n1, n2;
	while (n < 5){
		cout << "Give me a positive integer that is greater than 4: ";
		cin >> n;
	}

	for (int i = 1; i <= n; ++i){
		cout << "Give me two numbers: ";
		cin >> n1 >> n2;
		if (i % 3 == 1)
			cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
		else if (i % 3 == 2)
			cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
		else cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
	}

	return 0;
}
