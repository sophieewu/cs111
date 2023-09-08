#include <iostream>
using namespace std;

int main(){
	int n = 0, correct = 0;
    double n1, n2;
	
	while (n < 5){
		cout << "Give me a positive integer that is greater than 4: ";
		cin >> n;
	}

	for (int i = 1; i <= n; ++i){
		cout << "I will ask you a question. Please give me two numbers: ";
		cin >> n1 >> n2;
		double ans, key;
		if (i % 3 == 1){
			cout << n1 << " + " << n2 << " = ";
			cin >> ans;
			key = n1 + n2;
		} else if (i % 3 == 2) {
			cout << n1 << " - " << n2 << " = ";
            cin >> ans;
            key = n1 - n2;
		} else {
			cout << n1 << " * " << n2 << " = ";
            cin >> ans;
            key = n1 * n2;
		}
		if (ans != key) cout << "Wrong! The answer is " << key << endl;
        else ++correct;
	}
	cout << "You got " << correct << " correct, " << n - correct << " wrong." << endl;

	return 0;
}
