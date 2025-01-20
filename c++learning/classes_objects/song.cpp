#include <iostream>
#include "song.hpp"
// ? why are we including song.hpp ?
// unlike regular functions, for classes, we must include the header file here.

// add Song method definitions here:
// * class members defined here.
// ? how do we make sure it is a known class method and not a regular function being defined?
// be applying the class name FIRST - see below; Song:: followed by class method name.
void Song::add_title(std::string new_title){
  title = new_title;
}
// * class member defined here.
std::string Song::get_title(){
  return title;
}

void Song::add_artist(std::string new_artist){
  
  artist = new_artist;
  
}

std::string Song::get_artist(){

  return artist;

}