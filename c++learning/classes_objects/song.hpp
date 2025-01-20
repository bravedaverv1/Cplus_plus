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

    public:
    // * class methods delcared below
    void add_title(std::string new_title);
    std::string get_title();

};
// notice the semi colon after the closing curly brace