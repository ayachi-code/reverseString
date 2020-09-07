#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string reverseString(string word) {
    string newWord = "";
    char c_reverseString[word.size() + 1];
    strcpy(c_reverseString,word.c_str());
    int lastEllementReverseString = sizeof(c_reverseString) - 2;
    for (int i = lastEllementReverseString; i >= 0; i--) {
        newWord.push_back(c_reverseString[i]);
    };
    cout << newWord << endl;
    return newWord;
}

int main() {
    reverseString("Hallo maat");
    return 0;
}