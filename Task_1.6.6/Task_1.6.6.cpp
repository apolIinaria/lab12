#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() 
{
    const int size = 10;
    double array[size];

    cout << "Введіть елементи масиву:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    int negativeCount = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] < 0) {
            ++negativeCount;
        }
    }

    double minAbsValue = fabs(array[0]);
    for (int i = 1; i < size; ++i) {
        double absValue = fabs(array[i]);
        if (absValue < minAbsValue) {
            minAbsValue = absValue;
        }
    }

    double sumAfterMinAbs = 0;
    bool foundMinAbs = false;
    for (int i = 0; i < size; ++i) {
        if (foundMinAbs) {
            sumAfterMinAbs += fabs(array[i]);
        }
        if (fabs(array[i]) == minAbsValue) {
            foundMinAbs = true;
        }
    }

    for (int i = 0; i < size; ++i) {
        if (array[i] < 0) {
            array[i] = pow(array[i], 2);
        }
    }

    sort(array, array + size);

    cout << "Кількість від'ємних елементів: " << negativeCount << endl;
    cout << "Сума модулів елементів після мінімального за модулем елемента: " << sumAfterMinAbs << endl;
    cout << "Масив після заміни від'ємних елементів їхніми квадратами та сортування за зростанням:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }

    return 0;
}
