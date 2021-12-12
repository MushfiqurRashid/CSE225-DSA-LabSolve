#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

const int MAX_ITEM = 4;

template <class ItemType> class UnsortedType{
public:
    UnsortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType&, bool&);
    void ResetList();
    void GetNextItem(ItemType&);
private:
    int length;// length = koita element/value/item ache
    ItemType info[MAX_ITEM];
    int currentPos;
};

#endif // UNSORTEDTYPE_H_INCLUDED
