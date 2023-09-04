#include <iostream>
using namespace std;

int main(){
    int pin = 9889;
    int guess;

    // Prompt user to enter 4-digit PIN
    cout << "Enter 4-digit PIN: ";

    // Read the value entered by user 
    cin >> guess;

    // User has to guess the PIN until they get it right.
    while (guess != pin){
        cout << "Wrong! Try again." << endl;
        cout << "Enter 4-digit PIN: ";
        cin >> guess;
    }

    // combine lines 8-19
    // while (guess != pin){
    //     cout << "Enter 4-digit PIN: ";
    //     cin >> guess;
    // }

    /* Once the user has guessed correctly,
        print a congratulation message and terminate the program
    */
    cout << "Correct PIN provided!" << endl;
  
    return 0;
}