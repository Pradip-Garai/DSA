//Implement Binary Search 
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 5, 17, 25, 45, 63, 102, 458, 988, 1025};
    int size = 10;

    // Print array elements
    cout << "Array Elements are: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    // Binary search
    int searchElement;
    cout << "\nEnter Search Element: ";
    cin >> searchElement;
    int low = 0, high = size - 1;
    bool found = false;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > searchElement)
            high = mid - 1;
        else if (arr[mid] < searchElement)
            low = mid + 1;
        else {
            cout << searchElement << " found at index " << mid << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << searchElement << " not found !!!" << endl;

    return 0;
}
