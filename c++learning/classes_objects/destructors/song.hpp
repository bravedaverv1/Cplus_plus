#include <string>

class Song{
    std::string title;
    std::string artist;

    public:
    Song(std::string new_title, std::string new_artist);
    ~Song();

    std::string get_title();
    std::string get_artist();
};