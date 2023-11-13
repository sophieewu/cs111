#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	int n = rand() % (7 - 3 + 1) + 3;

	for (int i = 0; i < n; ++i){
		char c = 'a' + i;
		for (int j = 0; j < n; ++j){
			if (j <= i) cout << c;
			else cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			char c = 'a' + j;
			if (j <= i) cout << c;
			else cout << "*";
		}
		cout << endl;
	}

	return 0;
}
