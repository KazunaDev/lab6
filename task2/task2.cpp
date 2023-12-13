#include <iostream>
#include <cstdlib>
#include <Windows.h>

using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int* A, int m) {
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                swap(&A[j], &A[j + 1]);
            }
        }
    }
}

int main() {
    // Встановлення кодування 1251
        SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Генеруємо випадкове число в діапазоні від 20 до 29
    int m = 20 + rand() % 10;

    // Створюємо масив розміром m
    int* A = new int[m];

    // Заповнюємо масив випадковими числами
    for (int i = 0; i < m; i++) {
        A[i] = rand() % 100;
    }

    // Відсортовуємо масив по зростанню
    bubble_sort(A, m);

    // Виводимо відсортований масив
    for (int i = 0; i < m; i++) {
        cout << A[i] << " ";
    }
    cout << endl;


