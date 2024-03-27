#include <iostream>

class Fraction
{
private:
    int m_num{ 0 };
    int m_den{ 1 };

public:
    // Default constructor
    Fraction(int num=0, int den=1)
        : m_num{num}, m_den{den}
    {
    }

    // Copy constructor
    Fraction(const Fraction& f)
        : m_num {f.m_num}, m_den {f.m_den}
    {
        std::cout << "Copy constructor called\n";
    }

    void print() const
    {
        std::cout <<  m_num << "/" << m_den << "\n";
    }
};

int main()
{
    Fraction f {5, 3};  // Calls Fraction(int, int) constructor
    Fraction fCopy {f}; // What constructor is used here?

    f.print();
    fCopy.print();

    return 0;
}