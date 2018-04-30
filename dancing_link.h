#ifndef DANCING_LINK_H
#define DANCING_LINK_H

#include <string>
#include <vector>
#include <limits>
#include <stdio.h>
#include <iostream>

#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>

namespace py = pybind11;
using namespace pybind11::literals;

using namespace std;


class Object {
public:
	Object *l, *r, *u, *d, *c;
};

class DataObject : public Object {
public:
	int r_idx;
};

class ColumnObject : public Object {
public:
	int s;
	string name;
};


py::list get_combinations(py::array_t<uint8_t, py::array::c_style | py::array::forcecast> arr, py::array_t<uint8_t, py::array::c_style | py::array::forcecast> mask);


#endif