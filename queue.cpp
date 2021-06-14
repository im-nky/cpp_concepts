#include <bits/stdc++.h>
using namespace std;
 
/* default capacity of the queue */
#define SIZE 10

template <class X>
class mq {
public:
    virtual void dequeue() = 0;
    virtual void enqueue(X x) = 0;
    virtual X peek_element() = 0;
    virtual int size() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
};

template <class X>
class my_queue: public mq <X>{
protected:
    X * element;     
    int q_capacity; 
    int front;      
    int rear;       
    int curr_size;      
 
public:
    my_queue(int size = SIZE){
    	element = new X[size];
	q_capacity = size;
	front = 0;
	rear = -1;
	curr_size = 0;
    }
    void dequeue();
    void enqueue(X x);
    X peek_element();
    int size();
    bool isEmpty();
    bool isFull();
};
 
/* to dequeue the front element */
template <class X>
void my_queue<X>::dequeue() {
    if (isEmpty()) {
        cout << "Underflow\nProgram Terminated\n";
        exit(0);
    }
 
    cout << "Dequeueing " << element[front] << endl;
 
    front = (front + 1) % q_capacity;
    curr_size--;
}
 
/* to add an item to the queue */
template <class X>
void my_queue<X>::enqueue(X item) {
    // check for queue overflow
    if (isFull()) {
        cout << "Overflow \n";
        exit(EXIT_FAILURE);
    }
 
    cout << "enqueueing " << item << endl;
 
    rear = (rear + 1) % q_capacity;
    element[rear] = item;
    curr_size++;
}
 
/* to return the front element of the queue */
template <class X>
X my_queue<X>::peek_element() {
    if (isEmpty()) {
        cout << "UnderFlow \n";
        exit(0);
    }
    return element[front];
}
 
/* to return the size of queue */
template <class X>
int my_queue<X>::size() {
    return curr_size;
}
 
/* to check if the queue is empty or not */
template <class X>
bool my_queue<X>::isEmpty() {
    return (size() == 0);
}
 
/* to check if the queue is full or not */
template <class X>
bool my_queue<X>::isFull() {
    return (size() == q_capacity);
}
 
int main() {
    my_queue <int> q(4);
 
    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(4);
 
    cout << "front element is " << q.peek_element() << endl;
    q.dequeue();
 
    q.enqueue(9);
 
    cout << "queue size is " << q.size() << endl;
 
    q.dequeue();
    q.dequeue();
 
    if (q.isEmpty())
        cout << "queue is empty\n";
     else 
        cout << "queue is not empty\n";
 
    return 0;
}
