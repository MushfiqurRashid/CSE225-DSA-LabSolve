#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED

const int MAX_ITEM = 5;
template <class ItemType> class SortedType{
private:
    int length;
    ItemType info[MAX_ITEM];
    int currentPos;

public:
    SortedType();
    void makeEmpty();
    bool isFull();
    int lengthIs();
    void resetItem();
    void insertItem(ItemType);
    void deleteItem(ItemType);
    void retrieveItem(ItemType&, bool&);
    void getNextItem(ItemType&);

};

#endif // SORTEDTYPE_H_INCLUDED
