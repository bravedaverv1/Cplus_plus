#include <iostream>

int main() {
  
  int number = 9;
  
  switch(number) {
    // ? switch , what is it?
    // switch statement provides an alternative syntax that is easier to read and write. 
    // However, you are going to find these less frequently than if, else if, else.


    case 1 :
      std::cout << "Bulbusaur\n";
      break;
    case 2 :
      std::cout << "Ivysaur\n";
      break;
    case 3 :
      std::cout << "Venusaur\n";
      break;
    case 4 :
      std::cout << "Charmander\n";
      break;
    case 5 :
      std::cout << "Charmeleon\n";
      break;
    case 6 :
      std::cout << "Charizard\n";
      break;
    case 7 :
      std::cout << "Squirtle\n";
      break;
    case 8 :
      std::cout << "Wartortle";
      break;
    case 9 :
      std::cout << "Blastoise";
      break;
    default :
      std::cout << "Unknown\n";
      break;
  
  }
}

// The switch keyword initiates the statement and is followed by (), which contains the value that each 
// case will compare. In the example, the value or expression of the switch statement is grade. One restriction on 
// this expression is that it must evaluate to an integral type (int, char, short, long, long long, or enum).
// Inside the block, {}, there are multiple cases.
// The case keyword checks if the expression matches the specified value that comes after it. The 
// value following the first case is 9. If the value of grade is equal to 9, then the code that follows the : would run.
// The break keyword tells the computer to exit the block and not execute any more code or check any other cases inside the code block.
// At the end of each switch statement, there is a default statement. If none of the cases are true, then the code 
// in the default statement will run. It’s essentially the else part.
// In the code above, suppose grade is equal to 10, then the output would be “Sophomore”.

// Note: Without the break keyword at the end of each case, the program would execute the code for the first matching 
// case and all subsequent cases, including the default code. This behavior is different from if / else conditional 
// conditional statements which execute only one block of code.