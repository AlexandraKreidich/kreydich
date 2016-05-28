//точка на плоскости
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

class Point
{
	double x;
	double y;
public:
	Point();
	Point(double, double);
	Point(double);
	Point(const Point&);
	Point operator+(const Point&);
	Point operator+(int);
	Point operator*(int);
	Point operator=(Point&);
	Point operator-(const Point&);
	Point operator-(int);
	friend double dist(Point&, Point&);
	friend ostream& operator<<(ostream&, const Point&);
	friend istream& operator>>(istream&, Point&);
	Point set_point(double, double);
	double get_point_x() const;
	double get_point_y() const;
	~Point();
};

int main() 
{
	setlocale(LC_ALL, "Russian");
	Point D(2,3);
	Point C = D;
	cout << "Point C = D:" << " C" << C << endl;
	Point E(3, 5);
	cout << "Point E = " << "E" << E << endl;
	Point S = E * 2;
	cout << "Point S = E * 2:" << " S" << S << endl;
	Point U = S + E;
	cout << "Point U = S + D:" << " U" << U << endl;
	Point T = E + 3;
	cout << "Point T = E + 3:" << " T" << T << endl;
	Point I;
	I = I;
	cout << "Point I = I:" << " I" << I << endl;
	Point f[4] = { {1,3}, {2,3} , {4,7}, {3,5} };
	for (int i = 0; i < 4; i++) {
		cout << "f[" << i+1 << "] = " << f[i] << endl;
	}
	Point G;
	cout << "введите точку G: " << endl;
	cin >> G;
	cout << "Point G" << G << endl;
	Point *tmp = new Point;
	(*tmp).set_point(1,2);
	cout << *tmp << endl;
	Point V = *tmp - 5;
	cout << "Point V = *tmp - 5: " << V << endl;
	cout << "координата x точки V: " << tmp->get_point_x() << endl;
	cout << dist(V,G) << endl;
}

Point::Point() : x(0), y(0) {}

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

Point::Point(const double x)
{
	this->x = x;
	this->y = x;
}

Point::Point(const Point& D)
{
	x = D.x;
	y = D.y;
}

Point Point::operator+(const Point & D)
{
	Point tmp;
	tmp.x = this->x + D.x;
	tmp.y = this->y + D.y;
	return tmp;
}

Point Point::operator+(int i)
{
	this->x += i;
	this->y += i;
	return *this;
}

Point Point::operator*(int i)
{
	this->x *= i;
	this->y *= i;
	return *this;
}

Point Point::operator=(Point & D)
{
	this->x = D.x;
	this->y = D.y;
	return *this;
}
Point Point::operator-(const Point & A)
{
	this->x -= A.x;
	this->y -= A.y;
	return *this;
}
Point Point::operator-(int a)
{
	this->x -= a;
	this->y -= a;
	return *this;
}

double dist(Point& A, Point& B)
{
	return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

ostream & operator<<(ostream &out, const Point &A)
{
	out << "(" << A.get_point_x() << "," << A.get_point_y() << ")" << endl;
	return out;
}

istream & operator>>(istream &in, Point &A)
{
	cout << "введите координату x" << endl;
	in >> A.x;
	cout << "введите координату y" << endl;
	in >> A.y;
	return in;
}
Point Point::set_point(double _x, double _y)
{
	this->x = _x;
	this->y = _y;
	return *this;
}

double Point::get_point_x() const
{
	return x;
}

double Point::get_point_y() const
{
	return y;
}

Point::~Point() {}