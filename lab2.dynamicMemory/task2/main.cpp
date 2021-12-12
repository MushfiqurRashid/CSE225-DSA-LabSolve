#include <iostream>
#include"dynArr.h"
#include"dynArr.cpp"

using namespace std;

int main()
{
    int value;

    dynArr arr1();
    dynArr arr2(5);

    for(int i=0; i<5;i++){
        cin>> value;
        arr2.setValue(i,value);
    }
    for(int i=0;i<5;i++){
        cout<< arr2.getValue(i)<<" " ;
    }

    int size;
    cin>>size;
    for(int i=0; i<size;i++){
    cin>> value;
    arr2.setValue(i,value);
    }
    for(int i=0;i<size;i++){
    cout<< arr2.getValue(i)<<" " ;
    }

    arr2.~dynArr();

    for(int i=0;i<size;i++){
    cout<< arr2.getValue(i)<<" " ;
    }


    return 0;
}
