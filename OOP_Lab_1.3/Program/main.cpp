// функція main
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "BitString.h"

using namespace std;

int main()
{

	BitString o;

	o.Read();

	int n;

	cout << o.toString() << endl << endl;

	// ShiftLeft
	cout << "How many bits do you want to shift left?" << endl;
	cout << "Input:  "; cin >> n; cout << endl;
	BitString a = Left(o, n);
	cout << a.toString() << endl;

	// ShiftRight
	cout << "How many bits do you want to shift right?" << endl;
	cout << "Input:  "; cin >> n; cout << endl;
	BitString b = Left(o, n);
	cout << Right(o, n).toString() << endl;

	// Xor
	cout << "Xor: " << endl;
	cout << Xor(a, b).toString() << endl;

	cin.get();

	return 0;

}