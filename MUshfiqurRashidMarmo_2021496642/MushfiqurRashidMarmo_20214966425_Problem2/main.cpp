#include <iostream>

using namespace std;

void printPreorder(TreeNode<ItemType> tree)
{
    if (tree == NULL)
        return;
    cout << tree->data << " ";
    printPreorder(tree->left);
    printPreorder(tree->right);
}
int main()
{
    TreeType<int> x;
    x.InsertItem(12);
    x.InsertItem(10);
    x.InsertItem(20);
    x.InsertItem(9);
    x.InsertItem(11);
    x.InsertItem(10);
    x.InsertItem(12);
    x.InsertItem(12);

   printPreorder(x);

    return 0;
}
