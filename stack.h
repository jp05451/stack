template <typename T1>
class node
{
public:
    node(){};
    node(T1 _data) : data(_data) {}
    node *previousNode = nullptr;
    T1 data;
    node *nextNode = nullptr;
    ~node()
    {
        delete previousNode;
        delete nextNode;
    };
};

template <typename T2>
class stack
{
public:
    void push(T2 data);
    T2 pop();
    T2 top();
    int Size();

private:
    node<T2> *beginNode = nullptr;
    node<T2> *endNode = nullptr;
    int size = 0;
};

template <class T3>
void stack<T3>::push(T3 data)
{
    node<T3> *newNode = new node<T3>(data);
    newNode->data = data;

    if (beginNode == nullptr)
    {
        beginNode = newNode;
    }
    else
    {
        newNode->previousNode = endNode;
        endNode->nextNode = newNode;
    }
    endNode = newNode;
    size++;
}

template <class T4>
T4 stack<T4>::pop()
{
    size--;
    node<T4> *tempNode = beginNode->nextNode;
    T4 temp = beginNode->data;
    beginNode->nextNode = nullptr;
    beginNode->previousNode = nullptr;
    delete beginNode;
    beginNode = tempNode;
    return temp;
}