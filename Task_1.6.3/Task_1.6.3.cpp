#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int size = 10;
    double array[size];

    cout << "Введіть " << size << " елементів для масиву:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    double sumNegative = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] < 0) {
            sumNegative += array[i];
        }
    }
    cout << "Сума від'ємних елементів: " << sumNegative << endl;

    double maxElement = array[0];
    double minElement = array[0];
    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < size; ++i) {
        if (array[i] > maxElement) {
            maxElement = array[i];
            maxIndex = i;
        }
        else if (array[i] < minElement) {
            minElement = array[i];
            minIndex = i;
        }
    }

    double product = 1;
    int start, end;
    if (maxIndex < minIndex) {
        start = maxIndex + 1;
        end = minIndex;
    }
    else {
        start = minIndex + 1;
        end = maxIndex;
    }

    for (int i = start; i < end; ++i) {
        product *= array[i];
    }
    cout << "Добуток елементів між максимальним і мінімальним: " << product << endl;

    sort(array, array + size);

    cout << "Елементи масиву відсортовані за зростанням:\n";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }

    return 0;
}
