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
    std:: cout << "Hello World." << std:: endl;
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
    // ! terminating your line like this will cause a:
    // ! Hello World% (prompt appears before the output finishes)
    // * it doesnt break anything BUTT
    // it just happens when the program ends before the buffer is cleared.
    // You can avoid seeing it by using 
    // std::endl or std::flush to force the buffer to 
    // clear before the program finishes.

    // ? << std:: endl , what is it? 
    // This flushes the buffer and moves to the next line.
    // it would show:
    // Hello World
    // % (prompt appears after output is fully flushed)
    // Using std::endl or std::flush ensures that the output 
    // is immediately shown, and the prompt doesn’t appear prematurely.
    // ? << std:: flush , what is it? 
    // does that same as the above, removes the buffer and flush except,
    // unlike endl, it doesnt move the output on a new line. 

    // ? buffer or no flush? 
    //buffer
    // Efficiency: Writing data to the screen or a file can be slow. 
    // Imagine if your program printed every single character immediately—this 
    // would slow things down a lot, especially for large amounts of text.
    
    // Batching: Instead of printing each character or small bit of data 
    // immediately, buffering allows the program to accumulate several pieces 
    // of data in memory and then write them all at once, which is much faster.
    
    // flush
    // Visibility: You might want to make sure that everything you've printed up to that point appears on the screen right away. Without flushing, some of the output might still be sitting in the buffer when your program finishes, and you might not see it.
    // Timing: In interactive programs or those that interact with real-time data, flushing ensures that updates are printed without delay.

    // ? Why Don't We Always Need to Flush?
    // Most of the time, the operating system or the C++ 
    // runtime will automatically flush the buffer in certain situations, such as:
    // When the program finishes (exits).
    // When the output stream gets full (for example, 
    // if you're printing a large amount of text at once).
    // When the output is being written to std::cerr, which is 
    // typically unbuffered (so it’s flushed immediately).

    // * However, in cases where you need to make sure the output is visible to the user immediately (for instance, in an interactive program or in certain environments like logging), 
    // you might explicitly need to flush the buffer.
    return 0;
    // ? return 0; , what is this?
    // returned is the value of 0, because 0 tells the operating system 
    // the program terminates correctly.
    // another other values, postiive or nagative, that means our program
    // encountered and error.
}