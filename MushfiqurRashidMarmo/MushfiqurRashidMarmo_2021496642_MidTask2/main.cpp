#include <iostream>
#include"UnsortedType.cpp"
#include"UnsortedType.h"

using namespace std;

template <class t> void print(UnsortedType<t> u){
    int length = u.LengthIs();
    t value;
    for(int i =0;i<length; i++){
        u.GetNextItem(value);
        cout<< value <<"\n";
    }
    cout<<endl;
}

template <class t> int sumNode(UnsortedType<t> u)
{
    int sum = 0;

    for (int i = 0; i < u.LengthIs(); i++)
    {
        int x;
        u.GetNextItem(x);
        sum += x;
    }
    return sum;

}


int main()
{
    UnsortedType<int> ut;

    ut.InsertItem(1);
    ut.InsertItem(4);
    ut.InsertItem(3);
    ut.InsertItem(2);
    ut.InsertItem(5);
    ut.InsertItem(6);


    sumNode(ut);



    return 0;
}
