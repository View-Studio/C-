#pragma once
#include <iostream>

const double PI = 3.141592;

struct C2dType // Circle 2D Type
{
	double x, y;
};

struct CircleType
{
	C2dType center;
	double radius;
};

class CircleClass
{
public:
	CircleClass();
	~CircleClass();

	double circleArea();
	double getDistance(CircleType target);
	bool IsOverlapped(CircleType target);

	CircleType circle;
};