#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    int temp[n];
    int small = 0, large = n - 1;
    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (flag)
            temp[i] = arr[large--];
        else
            temp[i] = arr[small++];

        flag = !flag;
    }
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];

    cout << "\nModified Array\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
