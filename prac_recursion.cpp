#include <iostream>
using namespace std;

int sumCubes(int n){
	if (n <= 0) return 0;
	return sumCubes(n-1) + n * n * n;
}

bool lucky(int n){
	if (n <= 0) return false;
	if (n % 10 == 7) return true;
	return lucky(n/10);
}

int sumFirst2Digits(int n){
	if (n <= 0) return 0;
	if (n < 100) return n % 10 + n / 10;
	return sumFirst2Digits(n/10);
}

int maxDigit(int x, int y){
	if (x <= 0) return 0;
	int rec = maxDigit(x/10, y/10);
	int max = x % 10;
	if (y % 10 > max) max = y % 10;
	if (rec > max) return rec;
	return max;
}

int main() {
    int x = 675, y = 619;
    if (lucky(x)) cout << "lucky " << x << endl; // print lucky 675
    if (!lucky(y)) cout << "unlucky " << y << endl; // print unlucky 619
    cout << maxDigit(x, y) << endl; // print 9
    cout << sumCubes(3) << endl; // print 36
    cout << sumFirst2Digits(x) << endl; // print 13
    
    return 0;
}
