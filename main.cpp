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
        cout << c_reverseString[i] << endl;
    };
    return "test";
}

int main() {
    reverseString("Hallo");
    return 0;
}