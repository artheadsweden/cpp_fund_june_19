#include <iostream>

using namespace std;
template <typename T>
class Node
{
public:
	Node();
	Node(T data);
	~Node();
	T getData();
	void setData(T data);
	Node<T>* getNext();
	void setNext(Node<T>* next);
private:
	T data;
	Node<T>* next;
};

template <typename T>
Node<T>::Node() : data(T()), next(nullptr) {}

template <typename T>
Node<T>::Node(T data) : data(data), next(nullptr) {}

template<typename T>
Node<T>::~Node()
{
	cout << "Deleting node with data " << data << endl;
}

template<typename T>
T Node<T>::getData()
{
	return data;
}

template<typename T>
void Node<T>::setData(T data)
{
	this->data = data;
}

template<typename T>
Node<T>* Node<T>::getNext()
{
	return next;
}

template<typename T>
void Node<T>::setNext(Node<T>* next)
{
	this->next = next;
}

template <typename T>
class LinkedList
{
public:
	LinkedList();
	LinkedList(const LinkedList<T>& other);
	LinkedList(LinkedList<T>&& other);
	~LinkedList();
	LinkedList<T>& operator = (const LinkedList<T>& other);
	LinkedList<T>& operator = (LinkedList<T>&& other);
	T operator [](int index);
	void clear();
	void insertTail(T data);
	void insertHead(T data);
	T popHead();
	T popTail();
	T peekHead();
	T peekTail();
	void print();
	int size();
	Node<T>* getNode(int index);
private:
	void copy(const LinkedList<T>& other);
	Node<T>* head;
	Node<T>* tail;
	int _size;
};

template<typename T>
LinkedList<T>::LinkedList():head(nullptr), tail(nullptr), _size(0){}

template<typename T>
LinkedList<T>::LinkedList(const LinkedList<T>& other)
{
	copy(other);
}

template<typename T>
LinkedList<T>::LinkedList(LinkedList<T>&& other): head(nullptr), tail(nullptr), _size(0)
{
	swap(head, other.head);
	swap(tail, other.tail);
	swap(_size, other._size);
}

template<typename T>
LinkedList<T>::~LinkedList()
{
	clear();
}

template<typename T>
LinkedList<T>& LinkedList<T>::operator=(const LinkedList<T>& other)
{
	if (head)
	{
		clear();
	}
	copy(other);
	return *this;
}

template<typename T>
LinkedList<T>& LinkedList<T>::operator=(LinkedList<T>&& other)
{
	clear();
	swap(head, other.head);
	swap(tail, other.tail);
	swap(_size, other._size);
	return *this;
}

template<typename T>
T LinkedList<T>::operator[](int index)
{
	return getNode(index)->getData();
}

template<typename T>
void LinkedList<T>::clear()
{
	tail = head;
	while (tail)
	{
		tail = head->getNext();
		delete head;
		head = tail;
	}
	_size = 0;
}

template<typename T>
void LinkedList<T>::insertTail(T data)
{
	if (!tail)
	{
		head = new Node<T>(data);
		tail = head;
	}
	else
	{
		tail->setNext(new Node<T>(data));
		tail = tail->getNext();
	}
	_size++;
}

template<typename T>
void LinkedList<T>::insertHead(T data)
{
	if (!head)
	{
		head = new Node<T>(data);
		tail = head;
	}
	else
	{
		Node<T>* tempPtr = new Node<T>(data);
		tempPtr->setNext(head);
		head = tempPtr;
	}
	_size++;
}

template<typename T>
T LinkedList<T>::popHead()
{
	if (!head)
	{
		return T();
	}
	T nodeData = head->getData();
	Node<T>* tempPtr = head->getNext();
	delete head;
	head = tempPtr;
	if (!head)
	{
		tail = nullptr;
	}
	_size--;
	return nodeData;
}

template<typename T>
T LinkedList<T>::popTail()
{
	if (!tail)
	{
		return T();
	}
	if(!head->getNext())
	{ 
		T nodeData = head->getData();
		delete head;
		head = nullptr;
		tail = nullptr;
		_size = 0;
		return nodeData;
	}
	Node<T>* tempPtr = head;
	while (tempPtr->getNext() != tail)
	{
		tempPtr = tempPtr->getNext();
	}
	T nodeData = tail->getData();
	delete tail;
	tail = tempPtr;
	tail->setNext(nullptr);
	_size--;
	return nodeData;

}

template<typename T>
T LinkedList<T>::peekHead()
{
	return head->getData();
}

template<typename T>
T LinkedList<T>::peekTail()
{
	return tail->getData();
}

template<typename T>
void LinkedList<T>::print()
{
	Node<T>* tempPtr = head;
	while (tempPtr)
	{
		cout << tempPtr->getData() << " ";
		if (tempPtr->getNext())
		{
			cout << "-> ";
		}
		else
		{
			cout << "-| ";
		}
		tempPtr = tempPtr->getNext();
	}
	cout << endl;
}

template<typename T>
int LinkedList<T>::size()
{
	return _size;
}

template<typename T>
Node<T>* LinkedList<T>::getNode(int index)
{
	if (!head || index > _size - 1)
	{
		return nullptr;
	}
	int pos = 0;
	Node<T>* tempPtr = head;
	while (pos < index)
	{
		tempPtr = tempPtr->getNext();
		pos++;
	}
	return tempPtr;
}

template<typename T>
void LinkedList<T>::copy(const LinkedList<T>& other)
{
	if (!other.head)
	{
		head = nullptr;
		tail = nullptr;
		_size = 0;
	}
	else
	{
		Node<T>* tempPtr = other.head;
		while (tempPtr)
		{
			insertTail(tempPtr->getData());
			tempPtr = tempPtr->getNext();
		}
		_size = other._size;
	}
}

int main()
{	
	LinkedList<int> myList;
	myList.insertHead(2);
	myList.insertTail(3);
	myList.insertTail(4);
	myList.insertHead(1);

	for (int i = 0; i < myList.size(); i++)
	{
		cout << myList[i] << endl;
	}
	return 0;
}


