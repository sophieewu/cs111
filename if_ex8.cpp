#include <iostream>
using namespace std;

int main(){
	int grade;

    //Prompt user to enter their numeric grade
    cout << "Enter yout numeric grade: ";
    
	//Read the grade given by user
    cin>> grade;

    //Provide the letter grade to user based on their input
    if (grade >= 90){
        cout << "A" << endl;
    }else{
        if (grade >= 80) cout << "B" << endl;
        else {
            if (grade >= 70) cout << "C" << endl;
            else {
                if (grade >= 60) cout << "D" << endl;
                else cout << "F" << endl;
			}// grade<70
		}// grade<80
	}// grade<90
    
	return 0;
}
