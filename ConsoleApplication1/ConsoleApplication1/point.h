#pragma once
#ifndef POINT_H__
#define POINT_H__
#include<string>
class point
{
public:
/*  float x;
	float y;
	float z;
	
	point(float, float, float);
	std::string ToString();
*/
	float n_x;
	float n_y;
	float n_z;
	point(float n_x, float n_y, float n_z);
	std::string ToString();



private:

};
#endif