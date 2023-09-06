#include <iostream>
using namespace std;

int main(){
    for (int i=0; i<3; i++)
        cout << "i = " << i << endl;
  
    cout << endl;

    int j;
    for (j=0; j<3; j++)
        cout << "j = " << j << endl;
    cout << "Final j value: " << j << endl;

    return 0;
}