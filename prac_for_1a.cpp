#include <iostream>
using namespace std;

int main(){
	//declare variables
	int n = 0, counter = 1, numCorrect = 0;

	//validate the user input
	while (n <= 2 && counter <= 3){
		cout << "Enter a positive integer that is greater than 2: ";
		cin >> n;
	}
	if (n <= 2) return 0;

	for (int i = 0; i < n; ++i){
		int x, y;
		double usrAns = 0, avg;
		cout << "Enter 2 integers: ";
		cin >> x >> y;
		cout << "What is the average of " << x << " and " << y << "? ";
		cin >> usrAns;
		avg = (x+y) / 2.0;
		if (usrAns == avg) {
			cout << "Correct!" << endl;
			++numCorrect;
		} else cout << "Wrong! Answer is " << avg << endl;
	}
	cout << "You got " << numCorrect << " correct and " << n - numCorrect << " wrong." << endl;
	return 0;
}
