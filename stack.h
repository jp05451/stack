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
    void pop();
    T2 top();
    int Size();

private:
    node<T2> *beginNode = nullptr;
    node<T2> *endNode = nullptr;
    int size = 0;
};

template <class T2>
void stack<T2>::push(T2 data)
{
    node<T2> *newNode = new node<T2>(data);
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

