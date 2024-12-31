#include <iostream>

int main() {
    // ? variable , what is it? 
    // the name of a location in memory where value can be stored.
    // * To declare a variable in c++, first we want to specify the data type
    // * followed by a name:
    // * int file_size;
    // file_size = 100;
    // seperately, you can give it a value. once declared, you do not 
    // need to specify the value. 
    // * EFFICIENTLY, you can have it all as one line:
    int file_size = 100; 
    int counter = 0;
    double sales = 9.99;
    // ? double , what is it?
    // double is the data type used to store a decimal. int, is for whole numbers only.
    std:: cout << file_size << std::endl;
    // * the line above:
    // displays the value of file size while also displaying the output on its own line
    // through << std::endl;. without it, the value of the output below will appear as if 
    // all one string.
    // * if you had never initizialized the file size(gave it a value), and you attempted to display the file_size still:
    // ! error
    // you will get the error: variable 'file_size' is uninitialized when used here.
    // you will ALSO instead get a random int value.
    std:: cout << file_size + sales;
    // the above shows how you can add variables together
    return 0;
}