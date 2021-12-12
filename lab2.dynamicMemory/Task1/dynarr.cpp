#include "dynarr.h"
#include <iostream>

using namespace std;

dynArr::dynArr(){ //  :: -> scope opearator
    data = NULL; // pointer array te age thekei kisu value thake tai age null kore nite hobe
    size = 0;    // same as data
}
dynArr::dynArr(int s){
    data = new int[s]; //creating array // memory allocation
    size = s;
}
dynArr::~dynArr(){
    delete [] data;
}
int dynArr::getValue(int index){
    return data[index];
}
void dynArr:: setValue(int index, int value){
    data[index]= value;
}

