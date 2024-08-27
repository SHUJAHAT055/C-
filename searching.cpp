#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " , ";
    }
    cout << endl;

    int find;
    cout << "Enter the element to search in the array: ";
    cin >> find;

    bool found = false; // Flag to check if element is found
    for (int i = 0; i < n; i++) {
        if (arr[i] == find) {
            cout << "Element " << find << " found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Invalid number, element not found in the array." << endl;
    }

    return 0;
}
