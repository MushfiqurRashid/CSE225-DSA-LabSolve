#include"dynArr.h"
#include<iostream>

using namespace std;

dynArr:: dynArr(){
    data = NULL;
    size = 0;
}
dynArr:: dynArr(int row, int col){
    data = new int*[row];
    for(int i=0;i<row;i++){
        data[i]= new int[col];
    }
}
dynArr:: ~dynArr(){
    delete[] data;
}

void dynArr:: setValue(int row,int col, int value){
    data[row][col]= value;
}
int dynArr:: getValue(int row, int col){
    return data[row][col];
}
void dynArr::allocate(int row, int col){
    data = new int*[row];
    for(int i=0;i<row;i++){
        data[i]= new int[col];
    }
}
