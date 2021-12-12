#include <iostream>
#include"dynArr.h"
#include"dynArr.cpp"

using namespace std;

int main()
{
    int value,size;
    cout<< "Enter the size of the array:";
    cin>>size;

    dynArr<int> d1(size); // creating object
    dynArr<char> d2(size);
    dynArr<float> d3(size);

    for(int i=0;i<size;i++){
        cin>> value;
        d1.setValue(i,value);
    }
    for(int i=0;i<size;i++){
        cout<<d1.getValue(i)<<" ";
        cout<<d2.getValue(i)<<" ";
        cout<<d3.getValue(i)<<" ";
    }
    cout<<endl;

    return 0;
}
