#include"complex.h"
#include<iostream>

using namespace std;

Complex :: Complex(){
    real =0;
    imaginary =0;
}
Complex :: Complex(double r, double i){
    real = r;
    imaginary= i;
}
Complex Complex :: operator+(Complex a){
    Complex T;
    T.real = real + a.real;
    T.imaginary = imaginary +a.imaginary;
    return T;
}
Complex Complex:: operator*(Complex a){
    Complex T;
    T.real =(real*a.real)-(imaginary*a.imaginary);
    T.imaginary =(real*a.imaginary)-(imaginary*a.real);
    return T;
}
bool Complex :: operator!=(Complex a){
    bool T = false;
    if(real==a.real&&imaginary==a.imaginary){
        T=true;
    }
    return T;

}

void Complex::print(){
    //cout<<real<<"+" <<imaginary<<"i"<<endl;
    cout<<real<<"+"<<imaginary<<"i"<<endl;
}
