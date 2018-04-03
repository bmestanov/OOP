//
// Created by bmestanov on 03.04.18.
//

#include <cstring>
#include "Song.h"

Song::Song(char *name, char *artist, unsigned int duration) {
    strcpy(this->artist, artist);
    this->duration = duration;
    strcpy(this->name, name);
}

// Using the format
// <name> <artist> <duration>
// read and write in the same order

/// Note that if the name or artist contains whitespace (a space) things will fall apart

std::ostream &operator<<(std::ostream &os, const Song &song) {
    os << song.name << song.artist << song.duration;
    return os;
}

std::istream &operator>>(std::istream &is, Song &song) {
    is >> song.name >> song.artist >> song.duration;
    return is;
}
