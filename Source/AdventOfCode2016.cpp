// AdventOfCode2016.cpp
//

#include "Days.h"

int main(int argc, const char* argv[])
{
	Day* day = new Day03();
	day->RunPart1();
	day->RunPart2();
	delete day;

	return 0;
}