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

float DistanceToRect(float x, float y, Rect& rect);

int main()
{
	Rect rectangle = { 0, 0, 10, 10 };
	float x = 0;
	float y = 0;
	std::cout << "Please enter Point X: ";
	std::cin >> x;
	std::cout << "\nPlease enter point Y: ";
	std::cin >> y;
	std::cout << "\nDistance from point to rectangle is " << DistanceToRect(x, y, rectangle) << std::endl;

	system("PAUSE");
	return 0;
}

float DistanceToRect(float x, float y, Rect& rect)
{
	if (x > rect.maxX && y > rect.maxY)
	{
		// if the point is bigger than the maxs
		// min < max < x
		float a = x - rect.maxX;
		float b = y - rect.maxY;
		return sqrt((a*a) + (b*b));
	}
	else if (x > rect.maxX && y < rect.minY)
	{
		float a = x - rect.maxX;
		float b = rect.minY - y;
		return sqrt((a*a) + (b*b));
	}
	else if (x < rect.minX && y > rect.maxY)
	{
		float a = rect.minX - x;
		float b = y - rect.maxY;
		return sqrt((a*a) + (b*b));
	}
	else if (x < rect.minX && y < rect.minY)
	{
		// if the point is smaller than the mins
		// x < mix < max
		float a = rect.minX - x;
		float b = rect.minY - y;
		return sqrt((a*a) + (b*b));
	}
	else
	{
		// If point is inside box
		return 0;
	}

	
}