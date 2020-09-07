#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string reverseString(string word) {
    char c_reverseString[word.size() + 1];
    strcpy(c_reverseString,word.c_str());
    int lastEllementReverseString = sizeof(c_reverseString) - 2;
    cout << c_reverseString[lastEllementReverseString] << endl;
    return "test";
}

int main() {
    reverseString("Hallo");
    return 0;
}