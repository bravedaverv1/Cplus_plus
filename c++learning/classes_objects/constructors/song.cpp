#include "song.hpp"

// Below is a Defined constructor for Song:
Song::Song(std::string new_title, std::string new_artist){
    title = new_title;
    artist = new_artist;
}

std::string Song::get_title(){

    return title;

}

std::string Song::get_artist(){

    return artist; 

}