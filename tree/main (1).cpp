
#include <iostream>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"
using namespace std;

int main()
{
    TreeType<int> x;

    if(x.IsEmpty() == true)
        cout << "Tree is empty" << endl;
    else
        cout << "Tree is not empty" << endl;

    int a = 4, b = 9, c = 2, d = 7, e = 3, f = 11, g = 17, h = 0, i = 5, j = 1;

    x.InsertItem(8);
    x.InsertItem(b);
    x.InsertItem(c);
    x.InsertItem(d);
    x.InsertItem(e);
    x.InsertItem(f);
    x.InsertItem(g);
    x.InsertItem(h);
    x.InsertItem(i);
    x.InsertItem(j);

    if(x.IsEmpty() == true)
        cout << "Tree is empty" << endl;
    else
        cout << "Tree is not empty" << endl;

    cout << x.LengthIs() << endl;

    bool found;
    x.RetrieveItem(b, found);
    if(found == true)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    int k = 13;
    x.RetrieveItem(k, found);
    if(found == true)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

   x.Print();
    cout << endl;

    return 0;
}
