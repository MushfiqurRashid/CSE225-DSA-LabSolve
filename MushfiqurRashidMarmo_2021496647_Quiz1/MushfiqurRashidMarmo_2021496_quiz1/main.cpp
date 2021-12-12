#include <iostream>
#include"UnsortedType.cpp"
#include"UnsortedType.h"

using namespace std;

template <class t> void print(UnsortedType<t> u)
{
    int length = u.LengthIs();
    t value;
    for(int i =0; i<length; i++)
    {
        u.GetNextItem(value);
        cout<< value <<" ";
    }
    cout<<endl;
}

template<class t> void deleteIs(UnsortedType <t> u)
{
    int x;
    cin>>x;
    bool found;
    for(int i =0; i<u.LengthIs(); i++)
    {
        u.RetrieveItem(x,found);

    }

    if(found)
    {
        u.DeleteItem(x);
    }
    else
    {
        cout<<"Item does not exist";
        cout<<endl;

    }
}

int main()
{
    UnsortedType <int> ut;

    ut.InsertItem(5);
    ut.InsertItem(7);
    ut.InsertItem(6);
    ut.InsertItem(9);

    ut.DeleteItem(5);

    print(ut);
    deleteIs(ut);
    print(ut);

    return 0;
}
