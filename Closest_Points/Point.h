#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Point
{
public:
	bool operator==(Point &p) {
		if (x == p.x&&y == p.y)
			return true;
		else
			return false;
	}
	int x;
	int y;
};

class Point_Series
{
public:
	Point_Series(unsigned int);
	~Point_Series();
	bool find(Point &);
	void show();
private:
	unsigned int point_num;
	vector<Point>	m_points;
};



