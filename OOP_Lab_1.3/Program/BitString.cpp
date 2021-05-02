//реалізація методів класу

#include "BitString.h"
using namespace std;

long BitString::GetFirst() const
{
	return first;
}
long BitString::GetSecond() const
{
	return second;
}
void BitString::SetFirst(double value)
{
	first = value;
}
void BitString::SetSecond(double value)
{
	second = value;
}

void BitString::Display() const
{
	cout << toString();
}
void BitString::Init(long x, long y)
{
	first = x;
	second = y;
}
void BitString::Read()
{
	long x, y;
	cout << "Input your numbers :" << endl;
	cout << " First = "; cin >> x;
	cout << " Second = "; cin >> y;
	Init(x, y);
	cout << endl;
}
string BitString::toString() const
{
	stringstream sout;
	sout << " First = " << first << endl;
	sout << " Second = " << second << endl;
	return sout.str();
}

BitString Xor(const BitString& a, const BitString& b)
{
	BitString t;
	t.first = a.first ^ b.first;
	t.second = a.second ^ b.second;
	return t;
}

BitString Left(const BitString& a, int n)
{
    BitString t = a;
    long tmp[2];
    const int last_bit = sizeof(long) * 8 - 1;
    for (size_t i = 0; i < n; i++)
    {
        tmp[0] = t.first << 1;
        tmp[1] = t.second << 1;
        if (t.first & (1 << last_bit))
            tmp[1] |= (1 << 0);
        else
            tmp[1] &= ~(1 << 0);

        if (t.second & (1 << last_bit))
            tmp[0] |= (1 << 0);
        else
            tmp[0] &= ~(1 << 0);
        t.first = tmp[0];
        t.second = tmp[1];
    }
    return t;
}

BitString Right(const BitString& a, int n)
{
    BitString t = a;
    long tmp[2];
    const int last_bit = sizeof(long) * 8 - 1;
    for (size_t i = 0; i < n; i++)
    {
        tmp[0] = t.first >> 1;
        tmp[1] = t.second >> 1;
        if (t.first & (1 << 0))
            tmp[1] |= (1 << last_bit);
        else
            tmp[1] &= ~(1 << last_bit);

        if (t.second & (1 << 0))
            tmp[0] |= (1 << last_bit);
        else
            tmp[0] &= ~(1 << last_bit);
        t.first = tmp[0];
        t.second = tmp[1];
    }
    return t;
}