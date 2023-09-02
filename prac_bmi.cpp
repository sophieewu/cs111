#include <iostream>
using namespace std;

int main(){
	double ht, wt, bmi;
	
	cout << "Please provide your height in inches and weight in pounds: ";
	cin >> ht >> wt;

	bmi = (703*wt)/(ht*ht);

	cout << "You BMI is " << bmi << endl;

	return 0;
}
