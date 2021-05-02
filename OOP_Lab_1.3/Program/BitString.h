#pragma once
//визначення класу

#include <string>
#include <iostream>
#include <sstream>

class BitString
{
private:
    long first;
    long second;

public:
    long GetFirst() const;
    long GetSecond() const;

    void SetFirst(double value);
    void SetSecond(double value);

    void Init(long, long);
    void Read();
    void Display() const;
    std::string toString() const;

    friend BitString Xor(const BitString& a, const BitString& b);

    friend BitString Left(const BitString& a, int n);
    friend BitString Right(const BitString& a, int n);
};