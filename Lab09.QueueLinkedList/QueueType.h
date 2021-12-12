#ifndef QUEUETYPE_H_INCLUDED
#define QUEUETYPE_H_INCLUDED
class FullQueue {};
class EmptyQueue {};
template<class ItemType>
class QueueType {
    struct NodeType {
        ItemType info;
        NodeType *next;
    };
public:
    QueueType();
    ~QueueType();
    void MakeEmpty();
    void Enqueue(ItemType);
    void Dequeue(ItemType &);
    bool IsEmpty();
    bool IsFull();
    ItemType top();
private:
    NodeType *front, *rear;
};



#endif // QUEUETYPE_H_INCLUDED
