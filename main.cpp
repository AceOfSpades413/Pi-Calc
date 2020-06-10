
#include "cuda_runtime.h"
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>


typedef struct Points {

	float x;
	float y;

}Point;

Point genPoint()
{
	Point newPoint;
	newPoint.x = (float)rand() / RAND_MAX;
	newPoint.y = (float)rand() / RAND_MAX;
	return newPoint;

}

bool insideCircle(Point* point)
{
	float d = sqrt(((point->x) * (point->x)) + ((point->y) * (point->y)));
	if (d > 1)
	{
		return false;
		std::cout << d << ": Out";
	}
	else
	{
		return true;
		std::cout << d << ": In";
	}

}


int main()
{
	int in{ 0 };
	int total{ 0 };
	for (int index=0;index<=1000000;index++)
	{
		Point pt = genPoint();
		bool test = insideCircle(&pt);
		if (test)
		{
			in = in + 1;
		}
		total = total + 1;
		float pi = ((float)in / (float)total)*4;
		std::cout << pi<<"\n";
	}
	
	return 0;
}


