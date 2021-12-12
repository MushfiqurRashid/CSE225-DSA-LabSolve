#include <iostream>
#include"complex.h"
#include"complex.cpp"

using namespace std;

int main()
{
    Complex c1(5,2);
    Complex c2(5,3);

    Complex into = c1*c2;
    Complex sum = c1+c2;
    bool b=(c1!=c2);

    sum.print();
    into.print();
    cout<<b ;

    return 0;
}
