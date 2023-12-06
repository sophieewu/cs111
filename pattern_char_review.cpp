#include <iostream>
using namespace std;

int main(){
	int n = 0;
	char letter;
	while (!(n > 0 && n < 7)){
		cout << "Enter a positive integer that is smaller than 7: ";
		cin >> n;;
	}

	// letters vary by row - v1
	for (int i = n - 1; i >= 0; --i){
		letter = 'a' + i;
		for (int j = 0; j < n; ++j){
			if (j < i) cout << " ";
			else cout << letter;
		}
		cout << endl;
	}

	cout << endl;

	// letters vary by row - v2
        letter = 'a' + n - 1;
        for (int i = n - 1; i >= 0; --i){
                for (int j = 0; j < n; ++j){
			if (j < i) cout << " ";
			else cout << letter;
		}
		cout << endl;
		--letter;
	}

	cout << endl;

	// letters change by column - v1
	for (int i = n - 1; i >= 0; --i){
		for (int j = 0; j <= i; ++j){
			letter = 'a' + j;
			if (j <= i) cout << letter;
		}
		cout << endl;
	}

	cout << endl;

	// letters change by column - v2
	for (int i = n - 1; i >= 0; --i){
		letter = 'a';
		for (int j = 0; j <= i; ++j){
			cout << letter;
			++letter;
		}
		cout << endl;
	}

	cout << endl;

	letter = 'a';
	for (int i = 0; i < n; ++i){
		for (int j = 0; j <= i; ++j){
			cout << letter;
			++letter;
		}
		cout << endl;
	}

	return 0;
}
