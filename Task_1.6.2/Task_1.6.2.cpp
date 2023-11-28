#include <iostream>
using namespace std;

int main() 
{
    const int MAX_SIZE = 50;
    int A[MAX_SIZE];
    int n;

    cout << "Введіть розмір масиву: ";
    cin >> n;

    cout << "Введіть елементи масиву:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    int currentCount = 1;
    int maxCount = 1;

    for (int i = 1; i < n; ++i) {
        if (A[i] == A[i - 1]) {
            currentCount++;
        }
        else {
            currentCount = 1;
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
        }
    }

    cout << "Найбільша кількість підряд розміщених однакових елементів: " << maxCount << endl;

    return 0;
}
