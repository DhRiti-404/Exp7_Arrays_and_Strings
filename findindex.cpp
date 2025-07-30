#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int index;
    cout << "Enter the index to find the element: ";
    cin >> index;

    if (index >= 0 && index < size) {
        cout << "Element at index " << index << " is: " << arr[index] << endl;
    } else {
        cout << "Invalid index! Please enter a value between 0 and " << size - 1 << "." << endl;
    }

    return 0;
}
