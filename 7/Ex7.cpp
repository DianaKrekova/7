#include "Ex7.h"

Complex::Complex()
{
	this->im = 0.0;
	this->re = 0.0;
}

Complex::Complex(double im, double re)
{
	this->im = im;
	this->re = re;
}
Complex::Complex(const Complex& other)
{
	im = other.im;
	re = other.re;
}
void Complex::printComplex()
{
	if (im >= 0) {
		cout << this->re << '+' << this->im << 'i' << endl;
	}
	else {
		cout << this->re << this->im << 'i' << endl;
	}
}
Complex Complex::sumComplex(Complex c1)
{
	return Complex(this->re + c1.re, this->im + c1.im);
}
Complex Complex::complexMulzply(Complex c1) {
	double a = c1.re;
	double b = c1.im;
	double c = this->re;
	double d = this->im;
	return Complex(a * c - b * d, b * c + a * d);
}

Complex Complex::complexSubtract(Complex c1)
{
	return Complex(c1.re - this->re, c1.im - this->im);
}

Complex Complex::complexDivide(Complex c1)
{
	Complex c(0, 0); double r;
	r = this->re * this->re + c1.im * c1.im;
	c.re = (c1.re * this->re + c1.im * this->im) / r;
	c.im = (c1.im * this->re - c1.re * this->im) / r;
	return c;
}

double Complex::absComplex() {
	return sqrt(re * re + im * im);
}

Complex::~Complex() {
}


Vector::Vector()
{
	this->x = 0.0;
	this->y = 0.0;
}

Vector::Vector(double x, double y)
{
	this->x = x;
	this->y = y;
}
Vector::Vector(const Vector& other)
{
	x = other.x;
	y = other.y;
}
void Vector::printVector()
{
	cout << "X:" << this->x << endl << "Y:" << this->y << endl;
}
Vector Vector::sumVector(Vector v1) {
	return Vector(this->x + v1.x, this->y + v1.y);
}
Vector Vector::multiplynumberVector(double n) {
	return Vector(n * this->x, n * this->y);
}
double Vector::absVector() {
	return sqrt(x * x + y * y);
}

Vector::~Vector() {

}


Circle::Circle()
{
	this->radius = 0.0;
}

Circle::Circle(double radius)
{
	this->radius = radius;
}

Circle::Circle(const Circle& other)
{
	radius = other.radius;
}

double Circle::getRadius()
{
	return this->radius;
}
double Circle::area()
{
	return M_PI * this->radius * this->radius;
}
void Circle::print()
{
	cout << "Side length:" << this->radius << endl << "Area: " << this->area() << endl;
}

Circle::~Circle() {
}
