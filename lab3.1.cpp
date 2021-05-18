#include "Lorry.h"

Lorry ReturnObj(Lorry c)
{
	return c;
}

int main()
{
	Lorry B("MAN", 8, 320, 20000);
	cout << B << endl;

	cout << "Size = " << sizeof(B) << endl << endl;

	cout << "Principle of substitution" << endl << endl;
	Lorry A = B;
	cout << A << endl;

	Lorry C;
	cin >> C;
	cout << endl;
	cout << C << endl;
}