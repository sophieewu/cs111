#include <iostream>
using namespace std;

int main(){
	srand(time(0)); //Make sure your program generate different numbers for each program run.

	for (int i = 0; i < 4; ++i){
		for (int j = 0; j < 5; ++j)
			cout << rand() % (99 - 10 + 1) + 10 << " ";
		cout << endl;
	}

	return 0;
}
