#include <iostream>
using namespace std;

/*User is given 4 chances to guess a PIN which is 9889. 
  After 4 trials, if the guess is still incorrect,
  terminate the program.
*/
int main(){
    int pin = 9889, guess;
    int counter = 0;
    cout << "Enter 4-digit PIN: ";// Prompt user to enter 4-digit PIN
    cin >> guess; // Read the value given by user
    
    while (guess != pin){
        counter++; // counter = counter + 1;
        if (counter > 3) {
            cout << "4 trials. Bye!" << endl;
            exit(0);
        }
        cout << "Wrong. Try again: ";// Prompt user to enter 4-digit PIN again
        cin >> guess; // Read the value given by user
    }

    cout << "Correct PIN provided!" << endl;
        
    return 0;
}
