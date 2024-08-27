#include<iostream>
using namespace std;

int main() {
    int arr[120], size, index, n;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Display the original array
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Get the new element and the index where it should be inserted
    cout << "Enter the element to be inserted: ";
    cin >> n;
    cout << "Enter the index where the element should be inserted: ";
    cin >> index;

    // Shift elements to the right to make space for the new element
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified index
    arr[index] = n;
    size++;  // Increase the size of the array by 1

    // Display the array after insertion
    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
