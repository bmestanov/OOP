//
// Created by bmestanov on 03.04.18.
//

#ifndef OOP_TRACKLIST_H
#define OOP_TRACKLIST_H


#include "Song.h"

class Tracklist {
public:
    Tracklist(size_t capacity = 10);

    Tracklist &operator=(const Tracklist &);

    Tracklist &add(const Song &);

    ~Tracklist();

    friend std::ostream &operator<<(std::ostream &, const Tracklist &);

    friend std::istream &operator>>(std::istream &, Tracklist &);

    friend bool operator==(const Tracklist &, const Tracklist &);

private:
    Song *arr;
    size_t size;
    size_t capacity;
};


#endif //OOP_TRACKLIST_H
