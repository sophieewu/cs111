#include <iostream>
using namespace std;

int main(){
	int windSpeed;
	
	cout << "Enter average wind speed (mph) of a hurricane: ";
	cin >> windSpeed;

	if (74 <= windSpeed && windSpeed <= 95)
		cout << "Category One Hurricane" << endl;
	else if (96 <= windSpeed && windSpeed <= 110)
		cout << "Category Two Hurricane" << endl;
	else if (111 <= windSpeed && windSpeed <= 130)
		cout << "Category Three Hurricane" << endl;
	else if (131 <= windSpeed && windSpeed <= 155)
                cout << "Category Four Hurricane" << endl;
	else if (windSpeed > 155)
                cout << "Category Five Hurricane" << endl;

	return 0;
}
