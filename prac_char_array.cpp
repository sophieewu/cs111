#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void printArray(char a[][5], int r, int c){
	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

bool isVowel(char c){
	char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
	for (int i = 0; i < 5; ++i)
		if (c == vowels[i]) return true;

	return false;
}

void containsVowelsPerCol(char a[][5], int r, int c){
	for (int j = 0; j < c; ++j){
		for (int i = 0; i < r; ++i){
			if (isVowel(a[i][j])){
				cout << "Column " << j << " contains at least 1 vowel." << endl;
                                break;
			}
		}
	}
}

int main(){
	srand(time(0));
	char a[3][5];
	int numVowels = 0;

	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 5; ++j)
			a[i][j] = rand() % 26 + 'a';
	printArray(a, 3, 5);

	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 5; ++j){
			if (isVowel(a[i][j])){
				cout << "Row " << i << " contains at least 1 vowel." << endl;
				break;
			}
		}
	}

	containsVowelsPerCol(a, 3, 5);

	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 5; ++j)
			if (isVowel(a[i][j])) ++numVowels;

	cout << "There are " << numVowels << " vowels and " << 3*5-numVowels << " consonants in the array." << endl;
       return 0;
}       
