#include <iostream>

using namespace std;

int main()
{

    int guess;

    int tries = 0;

    std::cout << "I have a number 1-10.\n";
    std::cout << "Please guess it: ";
    std::cin >> guess;

    tries++;
    std::cout << tries << std::endl;

    // Write a while loop here:
    while (guess != 8 and tries < 4)
    {
        std::cout << "I have a number 1-10.\n";
        std::cout << "Please guess it: ";
        std::cin >> guess;
        tries++;
        std::cout << tries << std::endl;
    }
    if(guess == 8){
        std::cout << "you guessed it right! 8" << std::endl;
    }
}