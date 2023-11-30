#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

struct Queue {
    int data[MAX_SIZE];
    int front, rear;
};

void initializeQueue(Queue &q) {
    q.front = -1;
    q.rear = -1;
}

bool isEmpty(Queue &q) {
    return q.front == -1;
}

bool isFull(Queue &q) {
    return (q.rear + 1) % MAX_SIZE == q.front;
}

void enqueue(Queue &q, int value) {
    if (isFull(q)) {
        cout << "Queue is full. Cannot enqueue.\n";
        return;
    }

    if (isEmpty(q)) {
        q.front = 0;
        q.rear = 0;
    } else {
        q.rear = (q.rear + 1) % MAX_SIZE;
    }

    q.data[q.rear] = value;
}

void dequeue(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue is empty. Cannot dequeue.\n";
        return;
    }

    if (q.front == q.rear) {
        q.front = -1;
        q.rear = -1;
    } else {
        q.front = (q.front + 1) % MAX_SIZE;
    }
}

int front(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue is empty. No front element.\n";
        return -1; // or any sentinel value
    }

    return q.data[q.front];
}

int main() {
    Queue myQueue;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;
    
    cout << endl;

    initializeQueue(myQueue);

    enqueue(myQueue, 10);
    enqueue(myQueue, 20);
    enqueue(myQueue, 30);

    cout << "Front element: " << front(myQueue) << endl;

    dequeue(myQueue);

    cout << "Front element after dequeue: " << front(myQueue) << endl;

    return 0;
}
