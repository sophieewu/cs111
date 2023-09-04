#include <iostream>
using namespace std;

int main(){
    string weather;

    // Prompt user to enter the weather condition today
    cout << "How is the weather? <rain/snow/sunny/fog/cloudy>: ";
    // Read the weather condition given by user
    cin >> weather;

    // Provide advice to user based on the weather condition
    if (weather == "rain")
        cout << "Take your umbrella" << endl;
    else if (weather == "snow")
        cout << "Take your scarf" << endl;
    else
        cout << "No special advice for you" << endl;
  
    return 0;
}
