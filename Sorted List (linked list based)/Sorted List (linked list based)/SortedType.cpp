#include"SortedType.h"
#include<iostream>

using namespace std;

template <class ItemType> SortedType<ItemType>:: SortedType(){
    length =0;
    listData = NULL;
    currentPos = NULL;
}

template <class ItemType>int SortedType<ItemType>::LengthIs(){
    return length;
}
template <class ItemType>bool SortedType<ItemType>:: IsFull(){
    NodeType* location;

    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception){
        return true ;
    }
}

template<class ItemType> void SortedType<ItemType>:: InsertItem(){
    NodeType* location;
    NodeType* predLoc;
    NodeType* newNode;

    bool moreToSearch;
    moreToSearch = (location != NULL);
    location = listData;
    predLoc = NULL;

    while(moreaToSearch){
        if(location->info<item){
            predLoc = location;                 //checking item ta location er info r theke choto kina
            location = location->next;
            moreToSearch =(location != NULL);
        }
        else
            moreToSearch= false;
    }
    newNode = new Nodetype;
    newNode->info = item;

    if(predLoc ==NULL){
        newNode->next = listdata;
        newNode = listData;
    }
    else{
        newNode->next =location;
        predLoc->next = newNode;
    }
    length++;
}
template <class Itemtype> void SortedType<ItemType>::DeleteItem(){
    NodeType* location = listData;//ager location
    NodeType* tempLocation ;//porer location jeita delete korbo seitar location

    if(item == listData->info){
        tempLocation = location;  // first  item delete hoba kina
        listData = listData->next;
    }
    else{
    while (!(item==(location->next)->info){
           location = location-> next;
           }
           tempLocation = location->next;
           location->next = (location->next)->next;
    }
    delete tempLocation;
    length--;
}
template<class ItemType> void SortedType<ItemType>:: RetrieveItem(ItemType& item,bool &found ){
    NodeType* location = listData;
    found = false;
    bool moreToSearch = (location!=NULL);

    while(moreToSearch&& !found){
        if(item==location->info)
            found = true;
        else if(item>location->info){
            location = location->next;
            moreToSearch = (location!=NULL);
        }
        else
            found = true;
    }
}
template <class ItemType> void SortedType<ItemType>:: ResetItem(){
    currentPos =NULL;
}
template<class ItemType> void SortedType<ItemType>:: MakeEmpty(){
    Nodetype* tempPtr;

    while(listData!= NULL){
        tempPtr = listData;
        listData= listData->next;
        delete tempPtr;
    }
    length =0;
}
template<class ItemType> SortedType<ItemType>::~SortedType(){
    MakeEmpty();
}
template <class ItemType> void SortedType<ItemType>:: GetNextItem(ItemType& item){
    if(currentPos==NULL)
        currentPos = listData;
    else
        currentPos = currentPos->next;
    item = currentPos->info;
}


