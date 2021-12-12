#include<iostream>
#include"sortedType.h"

using namespace std;

template < class ItemType> SortedType<ItemType> :: SortedType(){
    length =0;
    currentPos =-1;
}
template< class ItemType>void SortedType <ItemType> :: makeEmpty(){
    length =0;
}
template <class ItemType> bool SortedType<ItemType> :: isFull(){
    return (length==MAX_ITEM);
}
template< class ItemType>  int SortedType<ItemType> :: lengthIs(){
    return length;
}
template <class ItemType>void SortedType<ItemType>:: insertItem(ItemType item){
    int location =0;
    bool moreToSearch = location < length;

    while(moreToSearch){
        if(item > info[location]){
         location++;
         moreToSearch = location <length;

        }
        else if(item >info[location]){
            moreToSearch = false;
        }
    }
    for(int index = length; index > location; index--){
        info[index]= info[index -1];
        info[location]= item;
        length ++;
    }
}

template <class ItemType> void SortedType <ItemType>:: deleteItem(ItemType item){
    int location =0;
    while(item!= info[location] ){
        location++;
    }
    for(int index = location -1; index < length; index ++){
        info[index -1 ] = info[location];
        length++;
    }
}
template< class ItemType> void SortedType<ItemType> :: retrieveItem(ItemType& item, bool& found){
    int midPoint;
    int first =0;
    int last = length -1;
    bool moreToSearch = first <= last;
    found = false;

    while (moreToSearch && !found){
        midPoint = (first +last)/2;
        if(item < info[midPoint]){ //item ta bame
           last = midPoint -1;
            moreToSearch = first <= last;
        }
        else if(item > info[midPoint]){ // item ta dane
            first = midPoint +1;
            moreToSearch = first <= last;
        }
        else{
            found = true;
            item = info[midPoint];
        }
    }
}
template <class ItemType> void SortedType<ItemType>:: resetItem(){
    currentPos =-1;
}
template <class ItemType> void SortedType<ItemType>:: getNextItem(ItemType& item){
    currentPos++;
    item = info [currentPos];
}

