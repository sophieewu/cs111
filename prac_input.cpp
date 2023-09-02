#include <iostream>
using namespace std;

int main(){
	string name;
	int age;
	double weight;

	cout << "Hello, I am Sophie. Thank you for participating in this survey! Let's start." << endl;

	cout << "What is your name? ";
	cin >> name;
	cout << "Nice to meet you, " << name << "!" << endl;

	cout << "How old are you? ";
	cin >> age;

	cout << "Please provide your weight in pounds: ";
	cin >> weight;

	cout << "You are " << age << " years old and " << weight << " pounds." << endl;
	cout << "Thank you for completing the survey!" << endl;

	return 0;
}
