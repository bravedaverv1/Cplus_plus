#include <algorithm>
// ? algorithm , what for?
// we use this so that we can use a reverse fucntion to reverse the string.
#include <iostream>


// ? PROMPT:
// Define a function is_palindrome() that takes:

// An std::string parameter text.
// The function should return:

// true if text is a palindrome.
// false if text is not a palindrome.
// (A palindrome is any text that has the same characters backwards 
// as it does forwards. For example, “hannah” and “racecar” are palindromes, 
// while “menu” and “aardvark” are not.)

// We will not test for edge cases such as capitalization or spaces.

// Define is_palindrome() here:
bool is_palindrome(std::string text)
{
    std::string original = text;
    std::string reverse = text;
    std::reverse(reverse.begin(), reverse.end());
    // ? reverse function , what is it?
    // it is an algo from the algorithm library but it is also a reverse function that 
    // modifies the string in place 
    // ! (it doesn't return a new string), so you can't assign the result to a new variable.
    // ? .begin() .end(), whats all that about?
    // essentially, we use it to tell the start point and end point for the reverse algo function
    // to reverse.
    if(original == reverse){
        return true;
    } else {
        return false;
    }
}

int main()
{
    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("ada") << "\n";
    std::cout << is_palindrome("lovelace") << "\n";
}