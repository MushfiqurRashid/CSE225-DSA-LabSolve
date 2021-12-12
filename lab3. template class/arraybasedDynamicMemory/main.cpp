#include <iostream>
#include"dynArr.h"
#include"dynArr.cpp"

using namespace std;

int main()
{
    int size;
    dynArr <double> a;
    a.insertItem(1);
    a.insertItem(2);
    a.insertItem(3);
    a.insertItem(4);
    a.insertItem(5);

    for(int i =0;i<MAX_ITEM;i++){
        cout<< a.getValue;
    }
    return 0;
}
