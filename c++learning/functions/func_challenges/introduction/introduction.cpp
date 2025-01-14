#include <iostream>

// ? PROMPT:
// Write a function introduction() with no return value that has:
// std::string parameter named first_name.
// std::string parameter named last_name.
// The function should print the last_name, followed by a comma, a space,
// first_name another space, and finally last_name again.

using namespace std;

// Define introduction() here:
void introduction(string first_name, string last_name)
{
    cout << last_name << ", " << first_name << " " << last_name << endl;
}

int main()
{

    introduction("Beyonce", "Knowles");
}