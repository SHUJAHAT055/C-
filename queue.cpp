#include<iostream>
using namespace std;

// Initializing front and rear for queue operations
int front = -1;
int rear = -1;
int queue[12], n = 12, x;

// Function to check if the queue is full
bool isFull() {
    return (rear == n - 1);
}

// Function to check if the queue is empty
bool isEmpty() {
    return (front == -1);
}

// Function to add an element to the queue
void enqueue() {
    if (isFull()) {
        cout << "Queue is full" << endl;
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        cout << "Enter the value: ";
        cin >> x;
        queue[rear] = x;
    }
}

// Function to remove an element from the queue
void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        if (front >= rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }
    }
}

// Function to get the front element of the queue
int peek() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return -1;
    } else {
        return queue[front];
    }
}

// Function to display all elements in the queue
void display() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    enqueue();
    enqueue();
    enqueue();
    enqueue();
   enqueue();
    enqueue();
    enqueue();
    enqueue(); enqueue();
    enqueue();
    
    cout << "Front element is: " << peek() << endl;
    
    display();
    cout<<"deequeue is perform"
    dequeue();
    dequeue();
    dequeue();
    cout<<"after dequeue is perform"<<endl;
    display();
    
    cout << "Front element is: " << peek() << endl;

    return 0;
}
