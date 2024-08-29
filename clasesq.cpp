#include <iostream>
using namespace std;

// Define the maximum size of the queue
const int MAX_SIZE = 12;

// Queue implementation
class Queue {
private:
    int front;
    int rear;
    int queue[MAX_SIZE];

public:
    // Constructor to initialize the queue
    Queue() {
        front = -1;
        rear = -1;
    }

    // Function to check if the queue is full
    bool isFull() {
        return (rear == MAX_SIZE - 1);
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    // Function to add an element to the queue
    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue " << x << "." << endl;
        } else {
            if (front == -1) front = 0;
            rear++;
            queue[rear] = x;
            cout << x << " enqueued to the queue." << endl;
        }
    }

    // Function to remove an element from the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
        } else {
            cout << queue[front] << " dequeued from the queue." << endl;
            front++;
        }
    }

    // Function to get the front element of the queue
    void peek() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Front element is: " << queue[front] << endl;
        }
    }

    // Function to display all elements in the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << queue[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    int choice, value;

    while (true) {
        cout << "\n--- Queue Operations Menu ---" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.peek();
                break;
            case 4:
                q.display();
                break;
            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                exit(0);
            default:
                cout << "Invalid choice! Please enter a number between 1 and 5." << endl;
        }
    }

    return 0;
}
