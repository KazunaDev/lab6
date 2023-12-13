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

    // Обчислюємо суму елементів головної діагоналі
    int sum_main_diagonal = 0;
    for (int i = 0; i < m; i++) {
        sum_main_diagonal += A[i * n + i];
    }

    // Обчислюємо суму елементів побічної діагоналі
    int sum_side_diagonal = 0;
    for (int i = 0; i < n; i++) {
        sum_side_diagonal += A[i * n + (m - 1 - i)];
    }

    // Виводимо суми елементів діагоналей
    cout << "Сума елементів головної діагоналі: " << sum_main_diagonal << endl;
    cout << "Сума елементів побічної діагоналі: " << sum_side_diagonal << endl;

    // Звільняємо пам'ять, виділену під масив
    delete[] A;

    return 0;
}

