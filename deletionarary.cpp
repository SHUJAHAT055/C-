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
        cout << arr[i] << ", ";
    }
    cout << endl;
    
    int num, index = -1;
    cout << "Enter the element to delete from the array: ";
    cin >> num; 

    // Find the index of the element to delete
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            index = i;
            break;
        }
    }

    // If element is found, shift elements
    if (index != -1) {
        for (int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Decrease the size of the array by 1

        cout << "Array after deletion: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << ", ";
        }
        cout << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
