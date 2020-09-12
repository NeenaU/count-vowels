#include <iostream>

using namespace std;

int main() {
    cout << "Enter a string:" << endl;
    string s;
    cin >> s;

    int numberOfVowels = 0;

    //Loop through each character in the string and check if it is a vowel
    for (int i=0; i<s.size(); i++) {
        char c = s[i];

        bool isLowerCaseVowel = (c==97 || c==101 || c==105 || c==111 || c==117);
        bool isUpperCaseVowel = (c==65 || c==69 || c==73 || c==79 || c==85);

        if (isLowerCaseVowel || isUpperCaseVowel) {
            numberOfVowels++;
        }
    }

    cout << "The number of vowels in the string: " << numberOfVowels;

    return 0;
}