#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template <class T> class dynArr{//creating template class
private:
    T *data; // data type
    int size;
public:
    dynArr(int);
    ~dynArr();
    void setValue(int,T); // T -> value
    T getValue(int); // T-. return type

};


#endif // DYNARR_H_INCLUDED
