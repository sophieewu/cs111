#include <iostream>
using namespace std;

void toLower(string& s){
        for (int i = 0; i < s.length(); ++i){
                if ('A' <= s[i] && s[i] <= 'Z')
                        s[i]+=32;
        }
}

bool isVowel(char c){
        char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
        for (int i = 0; i < 5; ++i)
                if (c == vowels[i] || c == vowels[i] - 32) return true;
        return false;
}

int main(){
        string lastName = "";
        cout << "Please provide your last name: ";
        cin >> lastName;

        for (int i = lastName.length()-1; i >= 0; --i)
                cout << lastName[i];
        cout << endl;

        toLower(lastName);
        cout << lastName << endl;

        if (isVowel(lastName[0])) lastName += "way";
        else {
                lastName += lastName[0];
                lastName.erase(0, 1);
        }

        if ('a' <= lastName[0] && lastName[0] <= 'z') lastName[0] -= 32;
        lastName = "Mr./Mrs./Ms. " + lastName;
        cout << lastName << endl;

        return 0;
}
