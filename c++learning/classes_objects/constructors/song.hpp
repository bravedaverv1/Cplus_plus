#include <string>

// ? constructor , what is it? 
// a special kind of method that lets you decide how the 
// objects of a class get created.
// It has the same name as the class and no return type.
// Constructors really shine when you want to instantiate an 
// object with specific attributes.

class Song{
    std::string title;
    std::string artist;

    public:
    // The Line Below is a Declared Constructor for Song:
    Song(std::string new_song, std::string new_artist);

    std::string get_title();
    std::string get_artist();
};