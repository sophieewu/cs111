#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath> // suport the abs function that returns the absolute value of a number
using namespace std;

// fill a 2D array with randomly generated numbers between 1 and 100
void randFill2DArray(int a[][2], int r, int c){
	for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j)
			a[i][j] = rand()%(100 - 1 + 1) + 1;
}

// print a 2D array in a tabular form
void print2DArray(int a[][2], int r, int c){
	cout << "2D array: " << endl;
        for (int i = 0; i < r; ++i){
                for (int j = 0; j < c; ++j)
                        cout << a[i][j] << " ";
		cout << endl;
	}
}

// print sum, average, largest and smallest of elements in a 2D array
void printStat2DArray(int a[][2], int r, int c){
	double sum = 0, avg;
	int max = a[0][0], min = max;
        for (int i = 0; i < r; ++i){
                for (int j = 0; j < c; ++j){
                        sum += a[i][j];
			if (a[i][j] > max) max = a[i][j];
			if (a[i][j] < min) min = a[i][j];
		}
        }
	cout << "Sum of the 2D array is " << sum << endl;
	cout << "Average of the 2D array is " << sum/(r*c) << endl;
	cout << "Largest element of the 2D array is " << max << endl;
	cout << "Smallest element of the 2D array is " << min << endl;
}

// return the sum of digits in a given number
int sumDigits(int n){
	if (n < 10) return n;
	return sumDigits(n/10) + n % 10;
}

// print the digit sum of each element in a 2D array
void printSumDigits(int a[][2], int r, int c){
	cout << "The digit sum of each element in the 2D array: " << endl;
	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j)
			cout << sumDigits(a[i][j]) << " ";
		cout << endl;
	}
	cout << endl;
}

// read integers entered by user to fill an array
void fillArray(int a[], int size){
	cout << "Enter " << size << " integers: ";
	for (int i = 0; i < size; ++i)
		cin >> a[i];
}

// print an array
void printArray(int a[], int size){
        for (int i = 0; i < size; ++i)
                cout << a[i] << " ";
        cout << endl;
}

// print sum, average, largest and smallest of elements in an array
void printStatArray(int a[], int size){
	double sum = 0, avg;
	int max = a[0], min = max;
	for (int i = 0; i < size; ++i){
		sum += a[i];
                if (a[i] > max) max = a[i];
                if (a[i] < min) min = a[i];
	}
        cout << "Sum of the array is " << sum << endl;
        cout << "Average of the array is " << sum/size << endl;
        cout << "Largest element of the array is " << max << endl;
        cout << "Smallest element of the array is " << min << endl;
}

// find the smallest gap between two adjacent elements in an array
int smallestGap(int a[], int size){
	int minGap = abs(a[1] - a[0]);
	for (int i = 0; i < size - 1; ++i){
		int gap = abs(a[i+1] - a[i]);
		if (gap < minGap) minGap = gap;
	}
	return minGap;
}

// copy all elements from an array to a 2D array
void increaseDimension(int a[], int b[][2], int r, int c){
	int index = 0;
	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j){
			b[i][j] = a[index];
			++index;
		}
	}
}

// copy all elements from a 2D array to an array
void dropDimension(int a[][2], int b[], int r, int c){
        int index = 0;
        for (int i = 0; i < r; ++i){
                for (int j = 0; j < c; ++j){
                        b[index] = a[i][j];
                        ++index;
                }
        }
}

int main(){
	int m[5][2] = {}, n[10] = {};
	srand(time(0));
	randFill2DArray(m, 5, 2);
	print2DArray(m, 5, 2);
	printStat2DArray(m, 5, 2);
	printSumDigits(m, 5, 2);
	fillArray(n, 10);
	printArray(n, 10);
	printStatArray(n, 10);
	cout << "The smallest gap between adjacent elements in the array is " << smallestGap(n, 10) << endl;
	increaseDimension(n, m, 5, 2);
	print2DArray(m, 5, 2);
	dropDimension(m, n, 5, 2);
	printArray(n, 10);

	return 0;
}
