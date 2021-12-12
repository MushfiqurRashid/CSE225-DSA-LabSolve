#include <iostream>
#include"dynArr.h"
#include"dynArr.cpp"

using namespace std;

int main()
{
    int row, col,value;
    cin>>row;
    cin>>col;

    dynArr arr(row,col);

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>> value;
             arr.setValue(i,j,value);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        cout<<arr.getValue(i,j)<<" ";

        }
        cout<<endl;
    }
    arr.~dynArr();

        for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        cout<<arr.getValue(i,j);

        }
    }
    return 0;
}
