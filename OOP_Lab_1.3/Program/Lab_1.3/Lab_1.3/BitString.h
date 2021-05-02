#pragma once
//визначення класу

class BitString
{

private:
    long First;
    long Second;

public:
    long GetFirst() const
    {
        return First;
    }
    long GetSecond() const
    {
        return Second;
    }

    void SetFirst(double value)
    {
        First = value;
    }
    void SetSecond(double value)
    {
        Second = value;
    }

    void Init(long, long);
    void Read();
    void Display() const;
    const char* toString() const;

    bool xor_operation() const;  
    char shiftLeft_operation() const;  
    char shiftRight_operation()const; 
};



