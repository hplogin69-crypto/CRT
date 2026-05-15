#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:

    bool isPalindrome(string s) {

        int start = 0;
        int end = s.size() - 1;

        while(start < end) {

            while(start < end && !isalnum(s[start])) {
                start++;
            }

            while(start < end && !isalnum(s[end])) {
                end--;
            }

            if(tolower(s[start]) != tolower(s[end])) {
                return false;
            }

            start++;
            end--;
        }

        return true;
    }
};

int main() {

    Solution obj;

    string s;

    cout << "Enter string: ";
    getline(cin, s);

    if(obj.isPalindrome(s)) {
        cout << "Palindrome";
    }
    else {
        cout << "Not Palindrome";
    }

    return 0;
}