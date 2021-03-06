/* 2DPathfinder -- library for pathfinding in 2D maps
 * map_t.h
 * Copyright (c) 2005 Alessandro Presta <alessandro.presta@gmail.com>
 * Released under the GNU Lesser General Public License */

#ifndef		__MAP_T_H__
#define		__MAP_T_H__

#define		POS(x, y, x_limit)			((x) + (y)*(x_limit))
#define		X(pos, x_limit)				((pos) % (x_limit))
#define		Y(pos, x_limit)				((pos) / (x_limit))		
#define		min(a, b)					((a < b) ? a : b)	

typedef struct map {
	short *cells;
	int x_limit, y_limit;
} map_t;

int Diagonal(int, int, int);

#endif /* __MAP_T_H__ */
