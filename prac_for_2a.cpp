#include <iostream>
using namespace std;

int main(){
	int x = 0, y = 0;

	//validate user input
	while (y - x < 20){
	       cout << "Provide two integers that the second number ";
	       cout << "is at least 20 greater than the first number: ";
	       cin >> x >> y;
	}

	cout << "Numbers between " << x << " and " << y << ":" << endl;
	for (int i = x; i <= y; ++i)
		cout << i << " ";
	cout << endl;

	cout << "Numbers between " << x << " and " << y;
	cout << " that are divisible by 2 but not divisible by 3: " << endl;
	for (int i = x; i <= y; ++i)
		if (i % 2 == 0 && i % 3 != 0)
		       cout << i << " ";
	cout << endl;

	return 0;
}
