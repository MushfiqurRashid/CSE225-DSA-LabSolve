#include <iostream>
#include"unsortedType.h"
#include"unsortedType.cpp"
#include"studentinfo.h"
#include"studentinfo.cpp"
#include<string.h>
#include<string>

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
template <class t> void Retrieve (UnsortedType<t> u, t value){
    bool b;
    u.RetrieveItem(value, b);
    if(b){
        cout<< "Item found"<<endl;
    }
    else {
        cout<< "Item not found"<<endl;
    }
}
template <class t> void checkFull(UnsortedType<t> u){
    bool b = u.IsFull();
    if(b){
        cout<<"list is full"<<endl;
    }
    else
        cout<<"List is not full"<<endl;
}
int main()
{
    StudentInfo s1(01,"mormo",3.5),
                s2(02,"rakib",3.8),
                s3(03,"shihab",3.45),
                s4(04,"iftee",3.85),
                s5(05,"alu", 3.25);

    UnsortedType<StudentInfo> st;
    st.InsertItem(s1);
    st.InsertItem(s2);
    st.InsertItem(s3);
    st.InsertItem(s4);
    st.InsertItem(s5);

    print(st);

    UnsortedType <int> ut;
    ut.InsertItem(5);
    ut.InsertItem(7);
    ut.InsertItem(6);
    ut.InsertItem(9);

    print(ut);
    cout<<"length is:"<<ut.LengthIs()<<endl;

    ut.ResetList();
    ut.InsertItem(1);
    //cout<<"length is:"<<ut.LengthIs();
    print(ut);

    Retrieve(ut,4);
    Retrieve(ut,5);
    Retrieve(ut,9);
    Retrieve(ut,10);


    checkFull(ut);
    ut.DeleteItem(5);

    checkFull(ut);
    ut.DeleteItem(1);

    print(ut);

    ut.DeleteItem(6);
    print(ut);
    return 0;
}
