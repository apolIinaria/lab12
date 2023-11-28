#include <iostream>
using namespace std;

void Zeros(int arr[], int size) 
{
    if (size <= 0) {
        cerr << "Помилка" << endl;
        return;
    }

    int maxIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    for (int i = 0; i < maxIndex; ++i) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
}

int main() 
{
    const int size = 10;
    int arr[size];

    cout << "Введіть " << size << " елементів для масиву:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    Zeros(arr, size);

    cout << "Змінений масив:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
