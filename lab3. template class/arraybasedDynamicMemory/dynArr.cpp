#include"dynArr.h"
#include<iostream>

using namespace std;

template <class T> dynArr<T>::dynArr(){
    size =0;
}

template <class T>void dynArr<T> :: insertItem(T s){
    data[size]= s;
    size ++;
}
template<class T> dynArr<T> :: ~dynArr(){
    delete []data;
}
template <class T> void dynArr<T>:: setValue (int index, T value){
    data [size]= value;
}
template< class T> T dynArr <T>:: getValue (int index){
    return data[index];
}
