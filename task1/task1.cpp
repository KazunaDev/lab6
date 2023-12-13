#include <iostream>
#include <cstdlib>
#include <Windows.h>

using namespace std;

int main() {
    // Встановлення кодування 1251
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Генеруємо випадкове число в діапазоні від 10 до 19
    int m = 10 + rand() % 10;

    // Створюємо масив розміром m
    int* A = new int[m];

    // Заповнюємо масив випадковими числами
    for (int i = 0; i < m; i++) {
        A[i] = rand() % 100;
    }

    // Знаходимо мінімальний елемент масиву
    int min_element = A[0];
    for (int i = 1; i < m; i++) {
        if (A[i] < min_element) {
            min_element = A[i];
        }
    }

    // Знаходимо максимальний елемент масиву
    int max_element = A[0];
    for (int i = 1; i < m; i++) {
        if (A[i] > max_element) {
            max_element = A[i];
        }
    }

    // Виводимо мінімальний і максимальний елементи масиву
    cout << "Мінімальний елемент: " << min_element << endl;
    cout << "Максимальний елемент: " << max_element << endl;

    // Звільняємо пам'ять, виділену під масив
    delete[] A;

    return 0;
}

