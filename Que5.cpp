//Que: Check if the string is palindrome or not.

#include <iostream>
using namespace std;

bool checkPal(int, string &);

int main() {
    string s = "masdam";
    if(checkPal(0, s) == true) {
        cout<<"The string is a Palindrome.";
    } else {
        cout<<"The string is not a Palindrome.";
    }
}

bool checkPal(int i, string &s) {
    if(i>=s.size()/2) {
        return true;
    }
    if(s[i] != s[s.size()-i-1]) {
        return false;
    }
    checkPal(i+1, s);
}