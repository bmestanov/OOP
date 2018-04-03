//
// Created by bmestanov on 03.04.18.
//

#ifndef OOP_SONG_H
#define OOP_SONG_H


#include <iostream>

class Song {
public:
    Song() = default;

    Song(char *name, char *artist, unsigned int duration);

    friend std::ostream &operator<<(std::ostream &, const Song &);

    friend std::istream &operator>>(std::istream &, Song &);

    friend bool operator==(const Song &, const Song &);

private:
    char name[50];
    char artist[50];
    unsigned int duration;
};


#endif //OOP_SONG_H
