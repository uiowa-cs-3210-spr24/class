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

    // Delete the implicit copy constructor
    Fraction(const Fraction& f) = delete;

    void print() const
    {
        std::cout <<  m_num << "/" << m_den << "\n";
    }
};

int main()
{
    Fraction f {5, 3};  // Calls Fraction(int, int) constructor
    Fraction fCopy {f}; // Can't do this anymore

    f.print();
    fCopy.print();

    return 0;
}