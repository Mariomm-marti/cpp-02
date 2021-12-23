#include "Fixed.hpp"
#include "Point.hpp"

static float	det(Point const a, Point const b, Point const c)
{
	return (a.getX() - c.getX()) * (b.getY() - c.getY()) * (b.getX() - c.getX()) * (a.getY() - c.getY());
}

// Calculate if is inside triangle by using barycentric coords. Thanks minirt
bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	detAB;
	float	detBC;
	float	detCA;
	bool	hasNegative;
	bool	hasPositive;

	detAB = det(point, a, b);
	detBC = det(point, b, c);
	detCA = det(point, c, a);
	hasNegative = (detAB < 0) || (detBC < 0) || (detCA < 0);
	hasPositive = (detAB > 0) || (detBC > 0) || (detCA > 0);
	return !(hasNegative && hasPositive);
}
