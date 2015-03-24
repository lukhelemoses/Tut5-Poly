#include "Shape.h"
#include<iostream>
using namespace std;

Shape::Shape(int in_l)
{
	l = in_l;
}


Shape::~Shape()
{
}

void Triangle::setSides(int in_s1,int in_s2){

	s1 = in_s1;
	s2 = in_s2;
}
void Triangle::setBase(int in_b)
{
	b = in_b;
}
int Triangle::getBase()
{
	return b;
}
int Triangle::getSides()
{
	return s1;
	return s2;
}
int Triangle::Shape::perimeter(int in_s1, int in_s2, int in_b)
{
	return (in_s1 + in_s2 + in_b);

}
int Triangle::Shape::area()
{
	return ((1/2)*b*l);
}