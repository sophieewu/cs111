#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int r, c;
	cout << "Enter two 1-digit positive numbers: ";
	cin >> r >> c;

	while (!(r >= 1 && r <= 9) || !(c >= 1 && c <= 9)){
		cout << "Bad input! Enter two 1-digit positive numbers: ";
		cin >> r >> c;
	}

	int a[r][c];

	// fill and print the 2D array
	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j){
			a[i][j] = rand() % (100 - 10 + 1) + 10;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}


	/* You may fulfill some tasks in the same nested loop.
	   If you are new to 2D arrays, use a nested loop for a task
	*/
	
	// find the average for each row
	for (int i = 0; i < r; ++i){
		double rowSum = 0;
		for (int j = 0; j < c; ++j)
			rowSum += a[i][j];

		cout << "The average of row " << i << " is " << rowSum/c << endl;
	}

	// find the average for each column
        for (int j = 0; j < c; ++j){
                double colSum = 0;
                for (int i = 0; i < r; ++i)
                        colSum += a[i][j];

                cout << "The average of column " << j << " is " << colSum/r << endl;
        }

	// find the average for the array
	double sum = 0, avg;
        for (int i = 0; i < r; ++i)
                for (int j = 0; j < c; ++j)
                        sum += a[i][j];

	avg = sum / (r*c);
	cout << "The average of all elements is " << avg << endl;

	// Count # elements that is greater than the average of all elements
	int numAboveAvg = 0;
	for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j)
			if (a[i][j] > avg) ++numAboveAvg;

	cout << "There are " << numAboveAvg << " numbers are greater than the average." << endl;

	// Find the greatest number in the 2D array and its index
	int max = a[0][0], maxI = 0, maxJ = 0;
	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j){
			if (a[i][j] > max) {
				max = a[i][j];
				maxI = i;
				maxJ = j;
			}
		}
	}
	cout << "The greatest number in the array is " << max << " and index is " << "(" << maxI << ", " << maxJ <<")" << endl;
	
	// Find the greatest number for each row in the 2D array
	for (int i = 0; i < r; ++i){
		int rowMax = a[i][0];
		for (int j = 0; j < c; ++j)
			if (a[i][j] > rowMax) rowMax = a[i][j];

		cout << "The greatest number in row " << i << " is " << rowMax << endl;
	}

	// Find the smallest number for each column in the 2D array
        for (int j = 0; j < c; ++j){
                int colMin = a[0][j];
                for (int i = 0; i < r; ++i)
                        if (a[i][j] < colMin) colMin = a[i][j];

                cout << "The smallest number in column " << j << " is " << colMin << endl;
        }

        // Find the number of evens for each row
        for (int i = 0; i < r; ++i){
                int rowEvens = 0;
                for (int j = 0; j < c; ++j)
                        if (a[i][j] % 2 == 0) ++rowEvens;

                cout << "There are " << rowEvens << " even numbers in row " << i << endl;
        }

	// Find the number of evens for each column
        for (int j = 0; j < c; ++j){
                int colEvens = 0;
                for (int i = 0; i < r; ++i)
                        if (a[i][j] % 2 == 0) ++colEvens;

                cout << "There are " << colEvens << " even numbers in column " << j << endl;
        }

	// Find the number of evens in the 2D array
	int numEvens = 0;
        for (int i = 0; i < r; ++i)
                for (int j = 0; j < c; ++j)
                        if (a[i][j] % 2 == 0) ++numEvens;

	cout << "There are " << numEvens << " even numbers in the array" << endl;

	return 0;
}
