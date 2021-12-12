#include<iostream>
#include"unsortedType.h"
#include"studentinfo.h"
#include"studentinfo.cpp"


using namespace std;

template <class ItemType> UnsortedType<ItemType>::UnsortedType(){
    currentPos =-1;
    length =0;
}
template <class ItemType> void UnsortedType<ItemType> :: MakeEmpty(){
    length =0;
    currentPos =-1;
}
template <class ItemType> bool UnsortedType<ItemType> :: IsFull(){
    return (length==MAX_ITEM);
}
template <class ItemType> int UnsortedType<ItemType> :: LengthIs(){
    return length;
}
template <class ItemType> void UnsortedType<ItemType> :: InsertItem (ItemType item){
    info[length]= item;//length =0 . 0 number index e 1 number value entry kora
    length ++;
}
template <class ItemType >  void UnsortedType<ItemType>:: DeleteItem (ItemType item){
    int location =0;

    while (item != info[location]){
        location ++;
    }
    info[location]= info[length-1];
    length--;
}
template <class ItemType> void UnsortedType<ItemType> :: RetrieveItem(ItemType& item,
bool &found){
    int location=0;
    bool moreToSearch = location < length;
    found = false;
    while (moreToSearch && !found){
        if(item == info[location]){
            found = true;
            item = info[location];
        }
        else{
            location++;
            moreToSearch = location <length ;
        }
    }
}
template <class  ItemType> void UnsortedType<ItemType> :: ResetList(){
    currentPos =-1;
}
template <class ItemType> void UnsortedType<ItemType> :: GetNextItem(ItemType& item){
    currentPos++;
    item = info[currentPos];
}

