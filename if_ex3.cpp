// Author: Shu-Yuan Wu
//CUNY ID#: 12345678

#include <iostream>
using namespace std;

int main(){
    bool isRestart = false;
    bool isShutDown = false; 
  
    if (isShutDown) {
        cout <<  "Your computer will shut down automatically in 30 seconds." << endl;
    } else if (isRestart) {
        cout << "Your computer will restart automatically in 30 seconds." << endl;
    } else {
        cout << "Your computer will sleep automatically in 30 seconds." << endl;
    } 

    return 0;
}