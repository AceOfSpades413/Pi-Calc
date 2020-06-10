
#include "cuda_runtime.h"
#include <iostream>
#include <stdlib.h>
#include <math.h>

bool insideCircle()
{
	float x = (float)rand() / RAND_MAX;
	float y = (float)rand() / RAND_MAX;
	float d = sqrt((x*x) + (y*y));
	if (d > 1)
	{
		return false;
	}
	else
	{
		return true;
	}
}


int main()
{
	int in{ 0 };
	int total{ 0 };
	for (int index=0;index<=1000000;index++)
	{
		bool test = insideCircle();
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