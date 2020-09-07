#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string reverseString(string word) {
    char c_reverseString[word.size() + 1];
    strcpy(c_reverseString,word.c_str());
    return "test";
}

int main() {
    reverseString("Hallo");
    return 0;
}