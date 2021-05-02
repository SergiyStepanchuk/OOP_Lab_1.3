
//реалізація методів класу

#include "BitString.h"

#include <iostream>
#include <cmath>
#include <string>
#include <sstream> // підключаємо бібліотеку, яка описує літерні потоки

using namespace std;

void BitString::Display() const
{
	cout << endl;
	cout << " First = " << First << endl;
	cout << " Second = " << Second << endl;
}

void BitString::Init(long x, long y)
{
	First = x;
	Second = y;
}

void BitString::Read()
{
	long x, y;
	cout << "Input------------- :" << endl;
	cout << endl;
	cout << " First = "; cin >> x; cout << endl;
	cout << " Second = "; cin >> y; cout << endl; cout << endl;
	Init(x, y);
}

const char* BitString::toString() const
{
	stringstream sout; // створили об'єкт "літерний потік"

	//sout << First << " + i * " << Second << endl; // направили в літерний потік

	sout << First << "xor" << Second <<"RESULT: (1-true, 0-false)"<<BitString::xor_operation();

	// виведення даних про об'єкт


	return sout.str().c_str(); // str() перетворює літерний потік
	// до літерного рядка
}



bool BitString::xor_operation() const
{
	if ((First || Second) && !(First && Second)) return true;
	return false;
}

char BitString::shiftLeft_operation() const
{
	int a_l;
	int b_l;
	int shift_l;

	cout << "How many bits do you want to shift left?" << endl;
	cout << "Input:  "; cin >> shift_l; cout << endl;

	a_l = First << shift_l;
	b_l = Second << shift_l;

	cout << "RESULT:  " << "First: " << a_l << "   Second: " << b_l << endl;
	cout << endl;
}

char BitString::shiftRight_operation()const
{
	int a_r;
	int b_r;
	int shift_r;

	cout << "How many bits do you want to shift right?" << endl;
	cout << "Input:  "; cin >> shift_r; cout << endl;

	a_r = First << shift_r;
	b_r = Second << shift_r;

	cout << "RESULT:  " << "First: " << a_r << "   Second: " << b_r << endl;
	cout << endl;
}



