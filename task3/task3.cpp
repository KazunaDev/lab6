#include <iostream>
#include <cstdlib>
#include <Windows.h>

using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void generate_random_array(int* A, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            A[i * n + j] = rand() % 100;
        }
    }
}

int main() {
    // Встановлення кодування 1251
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Генеруємо випадкові числа в діапазоні від 3 до 9
    int m = 3 + rand() % 6;
    int n = 3 + rand() % 6;

    // Створюємо масив розміром m * n
    int* A = new int[m * n];

    // Заповнюємо масив випадковими числами
    generate_random_array(A, m, n);

    // Обчислюємо середнє значення кожного стовбця
    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < m; i++) {
            sum += A[i * n + j];
        }
        double average = sum / m;
        cout << "Середне значення стовбця " << j + 1 << ": " << average << endl;
    }

    // Обчислюємо середнє значення кожного рядка
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += A[i * n + j];
        }
        double average = sum / n;
        cout << "Середне значення рядка " << i + 1 << ": " << average << endl;
    }

    // Звільняємо пам'ять, виділену під масив
    delete[] A;

    return 0;
}

