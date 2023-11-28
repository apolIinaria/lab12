#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    const int arraySize = 10;
    int array[arraySize];

    cout << "Введіть елементи масиву:" << endl;
    for (int i = 0; i < arraySize; ++i) {
        cin >> array[i];
    }

    int minValue = abs(array[0]);
    for (int i = 1; i < arraySize; ++i) {
        if (abs(array[i]) < minValue) {
            minValue = abs(array[i]);
        }
    }

    cout << "Мінімальний за модулем елемент: " << minValue << endl;

    int sumAfterZero = 0;
    bool foundZero = false;

    for (int i = 0; i < arraySize; ++i) {
        if (foundZero) {
            sumAfterZero += abs(array[i]);
        }
        else if (array[i] == 0) {
            foundZero = true;
        }
    }

    cout << "Сума модулів елементів після першого нульового елемента: " << sumAfterZero << endl;

    int newArray[arraySize];

    for (int i = 0, j = 0; i < arraySize; i += 2, j++) {
        newArray[j] = array[i];
    }

    for (int i = 1, j = arraySize / 2; i < arraySize; i += 2, j++) {
        newArray[j] = array[i];
    }

    cout << "Новий масив після перетворення:" << endl;
    for (int i = 0; i < arraySize; ++i) {
        cout << newArray[i] << " ";
    }

    return 0;
}
