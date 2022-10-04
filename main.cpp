#include "stack.h"
#include <iostream>

int main()
{
    stack<int> s;
    for (int i = 0; i < 10; i++)
    {
        s.push(i);
    }
    for (int i = 0; s.Size() != 0; i++)
    {
        std::cout << s.pop() << " ";
    }
    std::cout << std::endl;
}