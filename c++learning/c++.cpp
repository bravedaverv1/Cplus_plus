#include <iostream>
// ? #include <iostream> , what is it?
// input output stream, the name of one of the files in the standard library.
// ** this file gives us the capability of printing something on the screen
// or getting input from the user.
// ** the standard library has different files each serving a purpose.

int main() {
    // ? MAIN , what is it?
    // main is the entry point of our program. 
    // like the power button on our tv.

    // ? INT , what is it?
    // is what comes before the Main, which is the 
    // value type that should be returned(short for integer, representing a whole number)
    // ** the int returned tells us whether our program terminated succesfully or not.

    // ? () , what is it?
    // parenthesis to specify the parameters of this function.
    // a function can have 0 or more parameters

    // ? {} , what is it?
    // whatever gets typed within the curly braces gets executed 
    // when our operating system executes our main function

    // * c++ standard library: 
    // in this function, we want to write code to print something on the screen
    // for that, we use the c++ standard library. on the top, we use #include <iostream>
    std:: cout << "Hello World.";
    // ? std , what is it?
    // references out standard library. 
    // like a bucket or a container for features that are currently available for us.

    // ?  :: , what is it?
    // following std, shows all the features

    // ? cout , what is it?
    // short for character out. 
    // using cout, you can output one or more characters 

    // ? <<""; , what is it?
    // this is where you would write the statement you wish to display, 
    // within the parenthesis. ; terminates the line, just like how we use a period.
    // this line in c++ is called a Statement

    return 0;
    // ? return 0; , what is this?
    // returned is the value of 0, because 0 tells the operating system 
    // the program terminates correctly.
    // another other values, postiive or nagative, that means our program
    // encountered and error.
}