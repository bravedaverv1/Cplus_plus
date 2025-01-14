#include <iostream>

// ? ARGS & PARAMS , what are they?
// * Parameters 
// (sometimes called formal parameters) are 
// variables used in a function’s definition. They act as 
// placeholders for the input values you’ll use during your 
// function call.
// * Argument
// Then, when you’re ready to use your function, 
// the value you pass to the function is called an argument 
// (also known as an actual parameter). 
// * SEE BELOW

// Define get_emergency_number() below:

void get_emergency_number(std::string emergency_number){
// void is the TYPE - as we know, void is best for terminal outputs as it does not return
// get_emergency_number - function name
// () - space for parameters and args to be passed in
// std::string is the data type of the parameter, the space created for an arg later. arg will have to be of the same data type
// emergency_num is the name of the parameter
    std::cout << "Dial " << emergency_number << std::endl;
    // within this function we created we are having it display
    // dial and  then the emergency number that would be passed in as the arg.
}

int main()
{
    // Original emergency services number
    std::string old_emergency_number = "999";
    // For nicer ambulances, faster response times
    // and better-looking drivers
    std::string new_emergency_number = "0118 999 881 999 119 725 3";

    // Call get_emergency_number() below with
    // the number you want!
    get_emergency_number(old_emergency_number);
    // * calling the function, get_emergency_number
    // old_emergency_number is the variable defined above being
    // passed in now in this calling as the argement. 
    // it will fulfill the parameter placeholder like feature
    // and complete the function with the args value
}