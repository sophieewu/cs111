#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int correct = 0;
	
	cout << "I will ask you five addition questions. Please enter the sum for each." << endl;
	srand(time(0));
	
	for (int i = 0; i < 5; ++i){
		int x = rand() % (100 - 1 + 1) + 1;
		int y = rand() % (100 - 1 + 1) + 1;
		int ans = 0;
		cout << x << " + " << y << " = ";
		cin >> ans;
		int key = x + y;
		if (ans != key)
			cout << "Wrong! The answer is " << key << endl;
		else ++correct;
	}
	cout << "You got " << correct << " correct, " << 5 - correct << " wrong!" << endl;

	return 0;
}
