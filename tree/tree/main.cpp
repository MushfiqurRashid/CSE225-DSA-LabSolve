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

    int a = 7, b = 4, c = 34, d = 98, e = 65, f = 54, g = 1, h = 17;

    x.InsertItem(a);
    x.InsertItem(b);
    x.InsertItem(c);
    x.InsertItem(d);
    x.InsertItem(e);
    x.InsertItem(f);
    x.InsertItem(g);
    x.InsertItem(h);
    //x.InsertItem(i);
   // x.InsertItem(j);
    x.Print();
cout<<endl;
  // cout<<"Odd value length:"<<x.LengthIs();
 cout<<x.heightIs();
    /*if(x.IsEmpty() == true)
        cout << "Tree is empty" << endl;
    else
        cout << "Tree is not empty" << endl;

    cout << x.LengthIs() << endl;

    bool found;
    x.RetrieveItem(a, found);
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


    cout << endl;


    cout<<x.findMin()<<endl;
    int numberOfLeaves = x.numLeaves();
    cout<<"number of leaves:"<<numberOfLeaves;
    cout<<endl;

    int heightOfTree;

    heightOfTree = x.heightIs();

    cout<<"Height of the tree is:"<<heightOfTree;
    cout<<endl;



*/
    return 0;
}
