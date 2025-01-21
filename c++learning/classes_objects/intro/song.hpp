// create the song class below
class Song{
  // notice: no parathesis after Song? bc it is not a function, it is a class.

  // ? class members , what are they?
  // Components of a class are called class members.
  // ? how can you access a classes members?
  // Just like you can get a string’s length using .length()
  // you can access class members using the dot operator (object.class_member)
  // ? what do class members look like?
  // two types of class members:
  // * Attributes, also known as member data, consist of information about an instance of the class.
  // * Methods, also known as member functions, are functions that you can use with an instance of the class. 
  // We use a . before method names to distinguish them from regular functions.

  // * class attribute below of a string called title.
    std::string title;
    std::string artist;

    // ? public , what is it?
    // by default, everything inside of a class is private and, therefore, can only be accesed within its scope.
    // * take for exmaple the above attributes. if we were to attempt to simple some_object.some_attribute = some_value --
    // ! it would fail. it would be recognized as private. and sure, a solution could be to simply attempt to make it public BUTTT
    // making attributes simply public also make them succeptible bugs.
    // * our solution is to take the longer route by accessing and setting values within a method instead and have those
    // methods public.
    public:
    // * class methods delcared below
    void add_title(std::string new_title);
    std::string get_title();
    void add_artist(std::string new_artist);
    std::string get_artist();
    // ? private , what is it? 
    // just like unlike public, private makes things private. 
    // this would be useful if for exmaple you would want to make something AFTER the public key word PRIVATE.
    // anything below public becomes public therfore setting a private after public would stop that chain
    // and make all the below private then now private only.
    // private: // * applied the same way public is, on a line of its own with all the desired private below.

};
// notice the semi colon after the closing curly brace