#ifndef QUEUETYPE_H_INCLUDED
#define QUEUETYPE_H_INCLUDED

class FullQueue {
};

class EmptyQueue {
};

template<class ItemType>

class QueueType {

private:
    int *qu;
    int size;
    int front;
    int rear;

public:
    QueueType();
    QueueType(int);
    void enqueue(ItemType);
    int dequeue();
    bool isFull();
    bool isEmpty();
    void display();
    ItemType frontItem();
    int backItem();

    ~QueueType();
};


#endif // QUEUETYPE_H_INCLUDED
