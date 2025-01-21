#include <string>

class Song{
    std::string title;
    std::string artist;

    public:
    Song(std::string new_song, std::string new_artist);

    std::string get_title();
    std::string get_artist();
};