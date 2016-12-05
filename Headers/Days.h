#ifndef DAYS_H
#define DAYS_H

class Day
{
public:
	virtual void RunPart1(const int& argc, const char* argv[]) = 0;
	virtual void RunPart2(const int& argc, const char* argv[]) = 0;
};

class Day01 : public Day
{
public:
	virtual void RunPart1(const int& argc, const char* argv[]);
	virtual void RunPart2(const int& argc, const char* argv[]);
};

#endif // DAYS_H