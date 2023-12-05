#include <iostream>
using namespace std;

int main(){
	int n = 0;
	while (!(n > 0 && n < 7)){
		cout << "Enter a positive integer that is smaller than 7: ";
		cin >> n;
	}

	for (int i = n - 1; i >= 0; --i){
		char c = 'a' + i;
		for (int j = 0; j < n; ++j){
			if (j < i) cout << " ";
			else cout << c;
		}
		cout << endl;
	}

	cout << endl;

	for (int i = n - 1; i >= 0; --i){
		for (int j = 0; j <= i; ++j){
			char c = 'a' + j;
			if (j <= i) cout << c;
			else cout << " ";
		}
		cout << endl;
	}

	cout << endl;

	char c = 'a';
	for (int i = 0; i < n; ++i){
		for (int j = 0; j <= i; ++j){
			cout << c;
			++c;
		}
		cout << endl;
	}

	return 0;
}
