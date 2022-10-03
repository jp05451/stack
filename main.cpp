#include "stack.h"
#include <iostream>

int main()
{
    stack<int> s;
    s.push(3);
    s.push(5);
    int a = s.pop();
    std::cout << a;
}