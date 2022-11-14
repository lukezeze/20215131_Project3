#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

class Vector
{
private:
    double a, b, c;
public:
    //Vector() {}
    Vector(double a, double b, double c) :a{ a }, b{ b }, c{ c } {}

    Vector operator+() const 
    {
        return Vector(+a, +b, +c);
    }

    Vector operator-(const Vector& v) const 
    {
        return Vector{ a - v.a, b - v.b, c - v.c };
    }

    Vector operator/(double n) const 
    {
        return Vector{ a / n, b / n, c / n };
    }

    void print() 
    {
        cout << a << " " << b << " " << c << endl;
    }
};

int main() 
{
    Vector v0{ 1,2,3 };
    Vector v1{ 1,2,3 };

    Vector v2 = +v0;
    v2.print();

    Vector v3 = v0.operator-(v1);
    v3.print();

    Vector v4 = v1 / 3.0f;
    v4.print();
}