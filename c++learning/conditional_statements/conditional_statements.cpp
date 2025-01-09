#include <iostream>

using namespace std;

int main() {
  double ph = 4.6;

  if (ph > 7){
    cout << "Basic" << endl;
  } else if (ph < 7){
    cout << "Acidic" << endl;
  } else {
    cout << "Neutral" << endl;
  }
}