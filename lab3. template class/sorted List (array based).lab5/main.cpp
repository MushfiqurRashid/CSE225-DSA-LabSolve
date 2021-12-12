#include <iostream>
#include"SortedType.h"
#include"SortedType.cpp"

using namespace std;

template<class

int main()
{
    SortedType<int> st;

    int length = st.lengthIs();
    cout<< length;

    st.insertItem(5);
    st.insertItem(10);
    st.insertItem(7);
    st.insertItem(12);
    st.insertItem(3);



    return 0;
}
