#include <iostream>
#include <string>

// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters 
// and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
// Given a string s, return true if it is a palindrome, or false otherwise.


class Solution {
public:
    bool isPalindrome(std::string s) {
        std::cout << s << std::endl;

        bool result = false;

        std::string newString;

        for (int k = 0; k < s.size(); k++) {
            if (s[k] != ' ') {
                newString += s[k];
            };
        };

        std::cout << newString << std::endl;

        int start = 0;
        int end = newString.size() - 1;

        for (int i = 0; i < (newString.size() / 2) + 1; i++) {
            std::cout << i << std::endl;
            std::cout << "start: " << start << " ; END " << end << std::endl;

            if (newString[start] != newString[end]) {
                return false;
            };

            start++;
            end--;

        }

        return true;
    }
};


// Testing and initialization is done in the int main ()  

int main () {

    Solution solution;

    std::string testStringOne = "a long string";
    bool testOneBool = solution.isPalindrome(testStringOne);
    std::cout << "Test 1; answer is: " << testOneBool << std::endl;

    std::string testStringTwo = "abba";
    bool testTwoBool = solution.isPalindrome(testStringTwo);
    std::cout << "Test 2; answer is: " << testTwoBool << std::endl;

    std::string testStringTwoThree = "abcba";
    bool testThreeBool = solution.isPalindrome(testStringTwoThree);
    std::cout << "Test 3; answer is: " << testThreeBool << std::endl;

    std::string testStringTwoFour = "o";
    bool testFourBool = solution.isPalindrome(testStringTwoFour);
    std::cout << "Test 4; answer is: " << testFourBool << std::endl;

    return 0;

}
