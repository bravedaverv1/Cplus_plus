#include <iostream>
#include <map>
#include <unordered_map>
// ? why do we have two maps?
// bc they are different kinds of maps.
// ? map , what is it?
// one of tthem is a sorted map - self balancing binary search tree. 
// ? unordered_map , what is it?
// and the other map, unordered map, is unordered - a hash table using a hash 
// table to hash your key which in turn uses that to locate where your value is at.
// completely unordered and usually can actually be quite a bit faster than map.

using namespace std;

struct cityRecord 
{
    string Name;
    uint64_t Population;
};