#ifndef __2DVECTOR_H
#define __2DVECTOR_H

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

struct int_vector {
 int id;
 int from;
 int to;
 int_vector(const int_vector & i_v) : from(i_v.from), to(i_v.to), id(i_v.id) {}; // copy constructor
 int_vector(const int from, const int to, const int id) : from(from), to(to), id(id) {}; // basic constructor
};

#endif

