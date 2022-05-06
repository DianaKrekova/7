#ifndef EX7_H
#define EX7_H
#include <iostream>
#include <cmath>
#define M_PI 3.14
using namespace std;
class Complex {
private:
	double im;
	double re;
public:
	Complex(); 
	Complex(double im, double re); 
	Complex(const Complex& other);
	void printComplex();
	Complex sumComplex(Complex c1);
	Complex complexMulzply(Complex c1);
	Complex complexSubtract(Complex c1);
	Complex complexDivide(Complex c1);
	double absComplex();
	~Complex(); 
};

class Vector {
private:
	double x;
	double y;
public:
	Vector(); 
	Vector(double x, double y);
	Vector(const Vector& other);
	void printVector();
	Vector sumVector(Vector v1);
	Vector multiplynumberVector(double n);
	double absVector();
	~Vector();
};

class Circle {
private:
	double radius;
public:
	Circle();
	Circle(double radius);
	Circle(const Circle& other);
	double getRadius();
	double area();
	void print();
	~Circle();
};

#endif