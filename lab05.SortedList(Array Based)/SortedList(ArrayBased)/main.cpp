#include <iostream>
#include"SortedType.h"
#include"SortedType.cpp"

using namespace std;

template <class T> void print(SortedType<T> s){
    int length = s.lengthIs();
    T value;

    for(int i=0; i<length ; i++){
        s.getNextItem(value);
        cout<< value;
        cout<<endl;
    }
    cout<< endl;

}

int main()
{
    SortedType<int> st;

    int length = st.lengthIs();
    cout<< length;

    st.insertItem(5);
    st.insertItem(10);
    st.insertItem(7);
    st.insertItem(12);

    print(st);



    return 0;
}
