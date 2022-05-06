#include "Ex7.h"

int main() {
	setlocale(0, "");
	cout << "Vector:\n";
	Vector O;
	O.printVector();
	Vector A(4.5, 4.4);
	A.printVector();
	cout << "Vector x2:" << endl;
	Vector A2 = A.multiplynumberVector(2);
	A2.printVector();
	cout << "Vector module:" << A.absVector() << endl;
	cout << "Circle: \n";
	Circle B(4.5);
	B.print();
	cout << "Complex: \n";
	Complex C(-1, -2);
	Complex D(-5, 7);
	Complex E(C);
	E.printComplex();
	Complex R = D.sumComplex(C);
	R.printComplex();
	cout << C.absComplex() << endl;
	return 0;
}