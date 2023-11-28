#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
    const int size = 200;
    int array[size];

    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 101 - 50;
    }

    cout << "Масив: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    int count = 0;
    for (int i = 0; i < size - 1; ++i) {
        if (array[i] == array[i + 1]) {
            count++;
        }
    }

    cout << "Кількість пар сусідніх елементів з однаковими значеннями: " << count << endl;

    return 0;
}
