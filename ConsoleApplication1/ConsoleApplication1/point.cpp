#include "point.h"
#include <iostream>

point::point(float n_x, float n_y, float n_z) {

	this->n_x = n_x;
	this->n_y = n_y;
	this->n_z = n_z;

}
//point::point() : x(o.f) y(0.f) x(0.f) {

std::string point::ToString() {
	return "x=" + std::to_string(n_x) + " ,y=" + std::to_string(n_y) + " ,z=" + std::to_string(n_z);

}