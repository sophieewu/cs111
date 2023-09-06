#include <iostream>
using namespace std;

int main(){
	int x = 0, y = 0;

	while (y - x < 20){
	       cout << "Provide two integers that the second number ";
	       cout << "is at least 20 greater than the first number: ";
	       cin >> x >> y;
	}

	for (int i = x; i <= y; ++i)
		if (i % 2 == 0 && i % 3 != 0)
		       cout << i << " ";
	cout << endl;

	return 0;
}
