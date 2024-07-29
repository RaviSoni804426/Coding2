#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0 && arr[j] == 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        if (arr[j] != 0) {
            j++;
        }
    }

    cout << "Array after moving zeros: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


    
    