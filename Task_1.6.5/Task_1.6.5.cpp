#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

const int MAX_SIZE = 100;

int main() 
{
    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;

    if (n <= 0 || n > MAX_SIZE) {
        cerr << "Невірний розмір масиву. Розмір повинен бути від 1 до " << MAX_SIZE << endl;
        return 1;
    }

    double arr[MAX_SIZE];
    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    double A;
    cout << "Введіть число A: ";
    cin >> A;

    int countLessThanA = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < A) {
            countLessThanA++;
        }
    }
    cout << "Кількість елементів масиву, менших за " << A << ": " << countLessThanA << endl;

    double sumAfterLastNegative = 0;
    bool foundNegative = false;
    for (int i = n - 1; i >= 0; --i) {
        if (arr[i] < 0) {
            foundNegative = true;
            break;
        }
        sumAfterLastNegative += floor(arr[i]);
    }

    if (foundNegative) {
        cout << "Сума цілих частин елементів після останнього від'ємного елемента: " << sumAfterLastNegative << endl;
    }
    else {
        cout << "У масиві немає від'ємних елементів." << endl;
    }

    double maxElement = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    const double threshold = 0.2 * maxElement;

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (abs(arr[j] - maxElement) <= threshold && abs(arr[j + 1] - maxElement) > threshold) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Перетворений масив: ";
    for (int i = 0; i < n; ++i) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}
