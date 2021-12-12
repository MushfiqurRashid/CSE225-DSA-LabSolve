#include "dynarr.h"
#include "dynarr.cpp"
#include <iostream>

using namespace std;

int main()
{
    int input;
    dynArr arr1();
    dynArr arr2(5);

    for(int i=0; i<5;i++){
    cin>> input;
    arr2.setValue(i,input);
    }
    for(int i=0;i<5;i++){
        cout<< " "<< arr2.getValue(i);
    }

    arr2.~dynArr();

        for(int i=0;i<5;i++){
        cout<< " " << arr2.getValue(i);
    }
    return 0;
}
