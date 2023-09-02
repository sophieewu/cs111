#include <iostream>
using namespace std;

int main(){
	char letter;
	cout << "Enter your letter grade (A/B/C/D/F): ";
	cin >> letter;

	if (letter == 'A')
		cout << "The grade is 90 - 100" << endl;
	else if (letter == 'B')
                cout << "The grade is 80 - 89" << endl;
	else if (letter == 'C')
                cout << "The grade is 70 - 79" << endl;
	else if (letter == 'D')
                cout << "The grade is 60 - 69" << endl;
	else if (letter == 'F')
                cout << "The grade is 0 - 59" << endl;
	else cout << "Invalid input!" << endl;

	return 0;
}
