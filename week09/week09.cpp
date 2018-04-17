//
// Created by bmestanov on 16.04.18.
//

#include <cassert>
#include <iostream>
#include "Set.h"
#include "../week07/Song.h"

template<typename T>
Set<T> intersectionOf(const Set<T> a, const Set<T> b) {
    Set<T> result = Set<T>(a.getSize() + b.getSize());

    const T *first = a.asArray();

    for (size_t i = 0; i < a.getSize(); i++) {
        if (b.contains(first[i])) {
            result.add(first[i]);
        }
    }

    return result;
}

template<typename T>
Set<T> unionOf(const Set<T> a, const Set<T> b) {
    Set<T> result = Set<T>(a.getSize() + b.getSize());

    const T *first = a.asArray();
    const T *second = b.asArray();

    for (size_t i = 0; i < a.getSize(); i++) {
        result.add(first[i]);
    }

    for (size_t i = 0; i < b.getSize(); ++i) {
        result.add(second[i]);
    }

    return result;
}

int main09() {
    // Some tests for your class
    Set<int> intSet(2);

    intSet.add(6).add(7).add(8);
    assert(intSet.getCapacity() == 4);
    assert(intSet.getSize() == 3);
    assert(intSet.contains(7));
    assert(!intSet.contains(9));

    intSet.remove(6).remove(5).remove(7);
    assert(intSet.getSize() == 1);

    Set<char> aSet, bSet;
    aSet.add('a').add('m').add('n');
    bSet.add('m').add('n').add('z');

    Set<char> intersectionSet = intersectionOf(aSet, bSet);
    assert(intersectionSet.getSize() == 2);
    assert(intersectionSet.contains('m'));
    assert(intersectionSet.contains('n'));
    assert(!intersectionSet.contains('z'));

    Set<char> unionSet = unionOf(aSet, bSet);
    assert(unionSet.getSize() == 4);

    Set<Song> playlist;
    playlist.add(Song("Aquatic Interlude", "internetboi", 184));
    return 0;
}