#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];
    int sum = 0;

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
  
    float average = static_cast<float>(sum) / size;
  
    cout << "Sum of array elements: " << sum << endl;
    cout << "Average of array elements: " << average << endl;

    return 0;
}
