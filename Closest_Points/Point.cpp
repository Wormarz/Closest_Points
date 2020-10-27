#include "Point.h"
#include <cstdlib>
#include <ctime>


Point_Series::Point_Series(unsigned int n):point_num(n)
{
	srand(time(0));
	Point tmp;
	
	for (int i = 0; i < n;) {
		tmp.x = rand()%3000;
		tmp.y = rand() % 3000;
		
		if(std::find_if(m_points.begin(), m_points.end(), [tmp](const Point& A) {return (tmp.x == A.x&&tmp.y == A.y); })==m_points.end())
		{
			m_points.push_back(tmp);
			++i;
		}
	}
}



Point_Series::~Point_Series()
{
	m_points.clear();
}

bool Point_Series::find(Point &p)
{
std:vector<Point>::iterator it=m_points.begin();
	while (it != m_points.end())
	{
		if ((*it) == p)
			return true;
		++it;
	}
	return false;
}

void Point_Series::show()
{
std:vector<Point>::iterator it = m_points.begin();
	int i = 0;
	while (it!= m_points.end())
	{
		cout << '(' << (*it).x << ',' << (*it).y << ')' << '\t';
		++it;
		++i;
		if (i % 3==0)
			cout << endl;
		
	}

}
