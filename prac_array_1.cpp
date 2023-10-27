#include <iostream>
using namespace std;

int main(){
	string name[3] = {"Mike", "Alice", "Bob"};
	int score[3] = {100, 90, 80};

	for (int i = 0; i < 3; ++i)
		cout << name[i] << "'s score is " << score[i] << endl;

	return 0;
}
