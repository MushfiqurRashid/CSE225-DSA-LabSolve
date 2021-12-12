#include "binarysearchtree.h"
#include <iostream>
using namespace std;

template <class ItemType>
TreeType<ItemType>::TreeType()
{
    root = NULL;
}

template <class ItemType>
void Destroy(TreeNode<ItemType>*& tree)
{
    if (tree != NULL)
    {
        Destroy(tree->left);
        Destroy(tree->right);
        delete tree;
        tree = NULL;
    }
}

template <class ItemType>
TreeType<ItemType>::~TreeType()
{
    Destroy(root);
}

template <class ItemType>
void TreeType<ItemType>::MakeEmpty()
{
    Destroy(root);
}

template <class ItemType>
bool TreeType<ItemType>::IsEmpty()
{
    return root == NULL;
}

template <class ItemType>
bool TreeType<ItemType>::IsFull()
{
    TreeNode<ItemType>* location;
    try
    {
        location = new TreeNode<ItemType>;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}

template <class ItemType>
int CountNodes(TreeNode<ItemType>* tree)
{
    if (tree == NULL)
        return 0;
    else
        return CountNodes(tree->left) + CountNodes(tree->right) + 1;
}

template <class ItemType>
int TreeType<ItemType>::LengthIs()
{
    return CountNodes(root);
}

template <class ItemType>
void Retrieve(TreeNode<ItemType>* tree, ItemType&item, bool& found)
{
    if (tree == NULL)
        found = false;
    else if (item < tree->info)
        Retrieve(tree->left, item, found);
    else if (item > tree->info)
        Retrieve(tree->right, item, found);
    else
    {
        item = tree->info;
        found = true;
    }
}

template <class ItemType>
void TreeType<ItemType>::RetrieveItem(ItemType&item, bool& found)
{
    Retrieve(root, item, found);
}

template <class ItemType>
void Insert(TreeNode<ItemType>*& tree, ItemType item,)
{
    TreeNode<ItemType>* newNode;
    int count=1;
    if (tree == NULL)
        return newNode(item);

    if (item == tree->item)
    {
    (tree->count)++;
        return tree;
    }
    if (item < tree->item)
        tree->left = insert(tree->left, item);
    else
        tree->right = insert(tree->right, item);
    return tree;
}
template<class ItemType>
int Min(TreeNode<ItemType>* tree)
{
    TreeNode<ItemType>* current;
    current = tree;

    while (current->left != NULL)
    {
        current = current->left;
    }
    return(current->info);
}

template <class ItemType>
void TreeType<ItemType>::InsertItem(ItemType item)
{
    Insert(root, item);
}

template <class ItemType>
void Delete(TreeNode<ItemType>*& tree, ItemType item)
{
    if (tree == NULL)
        return tree;
    if (item < tree->item)
        tree->left = deleteNode(tree->left, item);
    else if (item > tree->item)
        tree->right = deleteNode(tree->right, item);

    else
    {
        if (tree->count > 1)
        {
            (tree->count)--;
            return tree;
        }
        if (tree->left == NULL)
        {
            struct node *temp = tree->right;
            free(tree);
            return temp;
        }
        else if (tree->right == NULL)
        {
            struct node *temp = tree->left;
            free(tree);
            return temp;
        }
        struct node* temp = minValueNode(tree->right);
        tree->item = temp->item;
        tree->count = temp->count;
        tree->right = DeleteNode(tree->right,
                                  temp->item);
    }
    return tree;
}


template <class ItemType>
void DeleteNode(TreeNode<ItemType>*& tree)
{
    ItemType data;
    TreeNode<ItemType>* tempPtr;
    tempPtr = tree;
    if (tree->left == NULL)
    {
        tree = tree->right;
        delete tempPtr;
    }
    else if (tree->right == NULL)
    {
        tree = tree->left;
        delete tempPtr;
    }
    else
    {
        GetPredecessor(tree->left, data);
        tree->info = data;
        Delete(tree->left, data);
    }
}

template <class ItemType>
void GetPredecessor(TreeNode<ItemType>* tree, ItemType& data)
{
    while (tree->right != NULL)
        tree = tree->right;
    data = tree->info;
}

template <class ItemType>
void TreeType<ItemType>::DeleteItem(ItemType item)
{
    Delete(root, item);
}


template <class ItemType>
void PrintTree(TreeNode<ItemType>* tree)
{
    if (tree != NULL)
    {
        PrintTree(tree->left);

        cout << tree->info << " ";

        PrintTree(tree->right);


    }
}

template <class ItemType>
void TreeType<ItemType>::Print()
{
    PrintTree(root);
}
