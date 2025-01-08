#include <iostream>

using namespace std;

int main(){
    cout << "testing..?" << endl; 
    // cout and endl all come from std namespace.
    // each with their own ability.
    // we dont need to specify std:: before them
    // because this file, with using namespace std, 
    // understands that they may come from there, 
    // and if it does no error is shown.
}

// * personally, debatably SLOWER than vs code
// ! HOWEVER
// ? how to run a c++ file on mac terminal?
// 1. in terminal within project folder:
//    g++ file_name
// 2. in terminal with project folder:
//      ./file_name
// ** TO CONTROL the name 
// . * in terminal:
//      g++ file_name.cpp -o descired_name
// . * to run the new name, in terminal:
//      ./new_file_name

// ! * ANY CHANGES MADE TO THE ORIGNAL .cpp FILE MUST:
// recompile the .cpp file to show the changes and run the new recompiled
// file.