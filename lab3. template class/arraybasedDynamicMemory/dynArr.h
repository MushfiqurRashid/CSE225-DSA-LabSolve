#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

const int MAX_ITEM=5;
template <class T> class dynArr{
private :
    T data[MAX_ITEM];
    int size;
public:
    dynArr();
    void insertItem(T);
    ~dynArr();

    T getValue(int);
    void setValue(int,T);
};

#endif // DYNARR_H_INCLUDED
