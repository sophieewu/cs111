#include <iostream>
using namespace std;

int main(){
	int n = 0;

	while (n % 2 != 1){// or while (n<=0 || n%2==0)
		cout << "Enter an odd positive integer: ";
		cin >> n;
	}

	for (int i = 1; i <= n; ++i){
		for (int j = 1; j <= n; ++j){
			if (i == n/2+1) cout << "O";
			else if (i+j == n+1) cout << "X";
			else cout << " ";
		}
		cout << endl;
	}

	return 0;
}
			



