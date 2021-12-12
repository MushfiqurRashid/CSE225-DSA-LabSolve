#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex{
public:
    Complex();
    Complex(double,double);
    Complex operator+(Complex);
    Complex operator*(Complex);
    bool operator !=(Complex);
    void print();
private:
    double real;
    double imaginary;
};


#endif // COMPLEX_H_INCLUDED
