//
// Created by bmestanov on 31.03.18.
//

#include <iostream>
#include <vector>
#include <fstream>
#include "IntArray.h"
#include "Song.h"
#include "Tracklist.h"
#include <iostream>

int main07() {
    // Warning! The classes Song and Tracklist are not implemented fully.
    // Your implementations must work with the following main function.

    // Option 1 for file handling
    // Use overloaded stream operators
    // this implementation has a limitation - does not work if the song name or artist name has a space!
    Song song1("911", "tyler", 300);
    Song song2("nights", "frank", 400);
    Tracklist tracklist;

    tracklist.add(song1).add(song2);

    std::ofstream out("songFile.txt"); // Open the file for writing
    out << song1; // Overloaded operator<< in Song is called
    out.close(); // Close the file

    Song song1_stream_cpy;
    std::ifstream in("songFile.txt"); // Open the file for reading
    in >> song1_stream_cpy; // Overloaded operator>> in Song is called
    in.close(); // Close the file

    // song1 == song1_stream_cpy should return true

    // Write the tracklist to a file
    out.open("tracklistFile.txt");
    out << tracklist;
    out.close();

    // Read a tracklist from file
    Tracklist tracklist_cpy;
    in.open("tracklistFile.txt");
    in >> tracklist_cpy;
    in.close();

    // tracklist == tracklist_cpy should return true


    // -------------------------------------------------------

    // Option 2 for file handling
    // Binary files - write the content of each byte to a file
    out.open("songFile.bin", std::ios::binary);
    // cast song1 object to a char array and write
    out.write(reinterpret_cast<char *>(&song1), sizeof(song1));
    out.close();

    char buffer[sizeof(Song) + 1]; // we'll need a buffer with the size of a song plus \0
    in.open("songFile.bin", std::ios::binary);
    in.read(buffer, sizeof(buffer)); // read into the buffer - now has the same byte representation as the original
    in.close();
    // use casting again
    Song song1_binary_cpy = *reinterpret_cast<Song *>(&buffer);


    // song1 == song1_binary_cpy should return true

    return 0;
}