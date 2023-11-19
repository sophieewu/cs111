#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void fill2DArray(int nums[][5], int row, int col){
        for (int i = 0; i < row; ++i)
                for (int j = 0; j < col; ++j)
                        nums[i][j] = 1 + rand()%(100-1+1);
}

void print2DArray(int nums[][5], int row, int col){
        for (int i = 0; i < row; ++i){
                for (int j = 0; j < col; ++j)
                        cout << nums[i][j] << " ";
                cout << endl;
        }
}

int colSum(int nums[][5], int row, int col, int c){
        int sum = 0;
        if (c < 0 || c >= col) return 0;
        for (int i = 0 ; i < row; ++i)
                sum += nums[i][c];
        return sum;
}

int sumArray(int nums[][5], int row, int col){
        int sum = 0;
        for (int i = 0; i < row; ++i)
                for (int j = 0; j < col; ++j)
                        sum += nums[i][j];
        return sum;
}

int main() {
	srand(time(0));
	int nums[3][5];

	fill2DArray(nums, 3, 5); // fill array with random numbers between 1 and 100

	// print array where each element in a row is separated by a space and every row is on its own line
	print2DArray(nums, 3, 5); 

	for (int i = 0; i < 5; i+=2){
		// print the sum of all numbers in column i of nums
		cout << "sum of column " << i << ": " << colSum(nums, 3, 5, i) << endl;
	}

	int sum = sumArray(nums, 3, 5); // sumArray returns the total of all elements of nums
	cout << "Sum of all elements is " << sum << endl;

	return 0;
 }

