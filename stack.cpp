#include<iostream>
using namespace std;

// Stack implementation with a fixed size of 5
int stack[5], n = 5, top = -1;

// Function to push an element onto the stack
void push(int x) {
    if (top == n - 1) {
        // Stack overflow condition
        cout << "Stack is full" << endl;
    } else {
        // Increment top and add the element to the stack
        top++;
        stack[top] = x;
    }
}

// Function to display all elements in the stack
void display() {
    if (top == -1) {
        // Stack underflow condition
        cout << "Stack is empty" << endl;
    } else {
        // Print all elements from top to bottom
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << "  ";
        }
        cout << endl;  // Move to the next line after displaying elements
    }
}

// Function to pop an element from the stack
void pop() {
    if (top == -1) {
        // Stack underflow condition
        cout << "Stack is empty" << endl;
    } else {
        // Decrement top to remove the top element
        top--;
    }
}
 void peek()
{
	if (top==-1)
	{
		        // Stack underflow condition
        cout << "Stack is empty" << endl;
	}
	else 
	{
		cout<<stack[top]<<endl;
	}
}
int main() {
    // Push elements onto the stack
    push(9);
    push(5);
    push(3);
    push(8);
    push(1);
    cout<<"top element of the index"<<endl;
   peek();
    // Display the current stack
    
	cout<<"stack elemrnt is"<<endl;
    display();

    cout << " deleted the element of the stack******************" << endl;

    // Pop the top element from the stack
    pop();
    cout<<"last element of the index"<<endl;
  peek();
    // Display the stack after popping an element
    cout<<"stack elemrnt is"<<endl;
    display();

    return 0;  // Indicate that the program ended successfully
}
