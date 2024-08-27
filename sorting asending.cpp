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
    
    cout << "Original array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    
    int temp;
    
    // Bubble Sort Algorithm
    for (int j = 0; j < n; j++) {
        for (int i = j + 1; i < n; i++) {
            if (arr[j] > arr[i]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    // Display the sorted array
    cout << "Sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
