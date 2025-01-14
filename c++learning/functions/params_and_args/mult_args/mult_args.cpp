#include <iostream>

// ? handling mult args , we can do that??
// You can add as many as you like, but you will have to 
// remember their order when you call the function.
// * the function data type can be any, it does not have to the same
// * as the data types of the parameter. HOWEVER, what gets RETURNED
// * MUST match the data type of the function

// Define name_x_times() below:
void name_x_times(std::string name, int x)
{
    while (x > 0)
    {
        std::cout << name << std::endl;
        x -= 1;
    }
}

int main()
{

    std::string my_name = "David!";
    int some_number = 5; // Change this if you like!
    // Call name_x_times() below with my_name and some_number
    name_x_times(my_name, some_number);
    // * the order is very important here. if you had passed in 
    // some_number first and then my name, it would treat that
    // num as the name and the name as the int which would fail
    // as the datatypes dont match.
}