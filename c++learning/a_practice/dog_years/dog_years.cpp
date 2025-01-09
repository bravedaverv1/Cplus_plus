#include <iostream>

using namespace std;

int main() {
  int dog_age = 8; // integer datatype variable (where we store data) set to store the value of 8.

  int early_years; // for dogs first two years.
  int later_years; // for your dogs following years.
  int human_years; // for your dogs total human years.

  early_years = 21; // the first two years of a dogs life count as 21 human years.
  
  later_years = (dog_age - 2) * 4; // bc of the above, each following year counts as 4 human years.

  human_years = early_years + later_years; // first 2 years followed by the rest adds up to human years. 
  cout << dog_age << " year old Cazador is " << human_years << " years old in human years." << endl;
}