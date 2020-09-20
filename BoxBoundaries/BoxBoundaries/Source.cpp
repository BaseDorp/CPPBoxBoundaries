// Please write a function that will return the distance from a single 2D point to the nearest edge of a rectangle,
// where a point is inside the rectangle will return a distance of 0

#include <iostream>
#include <string>

struct Rect
{
	float minX;
	float minY;
	float maxX;
	float maxY;
};

int main()
{
	Rect rectangle = { 0, 0, 10, 10 };
	std::cout << DistanceToRect(10, 10, rectangle);

	return 0;
}

float DistanceToRect(float x, float y, Rect& rect)
{
	// if the point is smaller than the mins then it is to the left or below

	// x - rect.minX
	// y - rect.minY

	// if the point is bigger than the maxs then it is to the right or above




	// a^2 + b^2 = c^2 for finding the distance
}