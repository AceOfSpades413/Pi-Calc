
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>

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
	for (int index=0;index<=100000000;index++)
	{
		bool test = insideCircle();
		if (test)
		{
			in = in + 1;
		}
		total = total + 1;
		float pi = ((float)in / (float)total)*4;
		std::cout<< std::setprecision(15)<< pi<<"\n";
	}
	
	return 0;
}
