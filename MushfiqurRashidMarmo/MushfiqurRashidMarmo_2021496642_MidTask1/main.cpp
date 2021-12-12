#include "SortedType.h"
#include "SortedType.cpp"

#include <iostream>
using namespace std;

int main()
{
    SortedType<int> list;

    for (int i = 0; i < 8; i++)
    {
        int x;
        cin>>x;
        list.InsertItem(x);
    }




    for (int i = 0; i < list.LengthIs(); i++)
    {
        int x;
        list.GetNextItem(x);

        cout << x << " ";


    }

    cout << endl;
}
