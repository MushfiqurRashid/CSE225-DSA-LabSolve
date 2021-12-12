#include <iostream>
#include "UnsortedType.h"
#include "UnsortedType.cpp"

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

int main()
{
    UnsortedType<int> list1,list2,merged;

    int m,n,v;
    cout<<"Enter m:";
    cin>>m;
    cout<<"List1:";
    for(int i=0;i<m;i++){

        cin>>v;
    list1.InsertItem(v);
    }

    cout<<"Enter n:";
    cin>>n;
    cout<<"List2:";
    for(int i=0;i<n;i++){

        cin>>v;
    list2.InsertItem(v);
    }

    int value1, value2, index1, index2;
    index1=list1.LengthIs();
    index2 = list2.LengthIs();

    list1.GetNextItem(value1);
    list2.GetNextItem(value2);

    while(index1>0 && index2>0){
        if(value1>value2){
            merged.InsertItem(value1);
            index1--;
            if(index1>0){
                list1.GetNextItem(value1);
            }
        }
            else if(value2>value1){
            merged.InsertItem(value2);
            index2--;
            if(index2>0){
                list2.GetNextItem(value2);
            }
        }
        else{
        list1.InsertItem(value1);
        list2.InsertItem(value2);
        index1--;
        index2--;
        if(index1>0)
            list1.GetNextItem(value1);
        if(index2>0)
            list2.GetNextItem(value2);
    }
    }



    while(index1>0)
    {
        merged.InsertItem(value1);
        index1--;
        if(index1>0)
        {
            list1.GetNextItem(value1);
        }
    }
    while(index2>0)
    {
        merged.InsertItem(value2);
        index2--;
        if(index2>0)
        {
            list2.GetNextItem(value2);
        }
    }

    int value_merged, index_merged=merged.LengthIs()-1;
    while(index_merged>=0)
    {
        merged.GetNextItem(value_merged);
        cout<<value_merged<<" ";
        index_merged--;

    }
    cout<<endl;

    return 0;
}
