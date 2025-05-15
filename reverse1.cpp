#include <iostream>
#include <windows.h>
#include <string>


using namespace std;

// 1
template <typename T>
double average(T ar[], const int SIZE) {
    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += ar[i];
    }
    return sum / SIZE;
}

// 2
template <typename T>
void find_min_max(T ar[], const int SIZE) {
    if (SIZE == 0) return;

    T min_val = ar[0], max_val = ar[0];
    int min_idx = 0, max_idx = 0;

    for (int i = 1; i < SIZE; i++) {
        if (ar[i] < min_val) {
            min_val = ar[i];
            min_idx = i;
        }
        if (ar[i] > max_val) {
            max_val = ar[i];
            max_idx = i;
        }
    }

    cout << "Min: value = " << min_val << ", index = " << min_idx << "\n";
    cout << "Max: value = " << max_val << ", index = " << max_idx << "\n\n";
}

// 3
template <typename T>
void reverse_array(T ar[], const int SIZE) {
    for (int i = 0, j = SIZE - 1; i < j; i++, j--) {
        T temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
    }
}

template <typename T>
void print_array(T ar[], const int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        cout << ar[i] << ", ";
    }
    cout << "\n";
}

int main() {
    const int SIZE = 5;
    int ar[SIZE] = { 1, 2, 3, 4, 5 };

    cout << "Before reverse: ";
    print_array(ar, SIZE);

    reverse_array(ar, SIZE);

    cout << "After reverse: ";
    print_array(ar, SIZE);
}
