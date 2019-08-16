#define MATH
#include "FastSquareRoot.h"

float F_rsqrt(float Number)
{
	long	i;
	float	x2, y;
	const float	xhalfs = Number/2;
	x2 = Number * 0.5;
	y = Number;
	i = *(long *)&y;
	i = 0x1FBD3EE7ul + (i >> 1);
	y = *(float *)&i;
	y = y / 2 + xhalfs / y;
	y = y / 2 + xhalfs / y;
	return	y;
}
