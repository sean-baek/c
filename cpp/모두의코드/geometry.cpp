#include <iostream>

using namespace std;

class point
{
    int x, y;

public:
    point(int pos_x, int pos_y);
};

class Geometry
{
    point *point_Array[100];

public:
    Geometry(point **point_list);
    Geometry();

    void AddPoint(const Point &point);

    void PrintDistance();

    void printNumMeets();
};


