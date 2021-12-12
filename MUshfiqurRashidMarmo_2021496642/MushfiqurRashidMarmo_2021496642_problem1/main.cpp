#include "QueueType.h"
#include "QueueType.cpp"
#include <iostream>

using namespace std;

int main()
{

    string expression;
    cout << "Input: ";
    cin >> expression;

    QueueType<char> qu;

    cout << "Output: ";

    for (int i = 0; i < expression.size(); i++)
    {
        if (expression[i] == '(')
        {
            qu.enqueue(expression[i]);
        }
        else if (expression[i] == ')')
        {
            if (qu.isEmpty())
            {
                cout << "Not Balanced" << endl;
                return 0;
            }

            qu.dequeue();
        }
        else
        {
            continue;
        }
    }

    if (qu.isEmpty())
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Not Balanced" << endl;
    }

    if (!qu.isEmpty())
    {
        cout << "violates char: ";
        cout << qu.frontItem() << endl;
    }

    return 0;
}
