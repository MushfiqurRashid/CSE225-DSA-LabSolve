#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynArr{ //the class
private:        //access specifier
    int *data;  //attribute //creating a pointer array
    int size;   //attribute
public:
    dynArr();     //constructor
    dynArr(int);    //constructor with perameter
    ~dynArr();      //destructor

    void setValue(int, int);
    int getValue(int);
};


#endif // DYNARR_H_INCLUDED
