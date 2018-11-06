#include <stdint.h>

#define F 16384

int tofxpt(int x);
int tointfloor(int x);
int tointround(int x);
int addin(int x, int y);
int addfx(int x, int y);
int subin(int x, int y);
int subfx(int x, int y);
int mulin(int x, int y);
int mulfx(int x, int y);
int divin(int x, int y);
int divfx(int x, int y);

int tofxpt(int x)
{
	return x * F;
}

int tointfloor(int x)
{
	return x / F;
}

int tointround(int x)
{
	if (x>=0)
	else
		return (x - F/2) / F;
		return (x + F/2) / F;
}

int addin(int x, int y)
{
	return x + (y * F);
}

int addfx(int x, int y)
{
	return x + y;
}

int subin(int x, int y)
{
	return x - (y * F);
}

int subfx(int x, int y)
{
	return x - y;
}

int mulin(int x, int y)
{
	return x * y;
}

int mulfx(int x, int y)
{
	return ((int64_t) x) * y / F;
}

int divin(int x, int y)
{
	return x / y;
}

int divfx(int x, int y)
{
	return ((int64_t) x) * F / y;
}
