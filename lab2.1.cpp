// lab2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iostream>
using namespace std;

void NMinmax(float* arr, int size, float& min, float& max);

void FillArray(float* const arr, const int size);
void ShowArray(float* const arr, const int size);
float randfrom(float min, float max);

int main()
{
    setlocale(0, "ru");
    for (int i = 0; i < 3; i++)
    {
        cout << "Введите размер массива ";
        int size;
        cin >> size;

        float* arr = new float[size];
        float min = 0;
        float max = 0;

        FillArray(arr, size);
        ShowArray(arr, size);

        NMinmax(arr, size, min, max);
        cout << min << "\t" << max << endl;

        delete[] arr;
    }
    return 0;
}
void NMinmax(float* arr, int size, float& min, float& max)
{
    min = arr[0];
    max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        else if (arr[i] < min)
            min = arr[i];

    }
}

float randfrom(float min, float max)
{
    float range = (max - min);
    float div = RAND_MAX / range;
    return round((min + (rand() / div)) * 10) / 10;
}
void FillArray(float* const arr, const int size)
{
    for (int i = 0; i < size; i++) {
        arr[i] = randfrom(1, 15);
    }
}
void ShowArray(float* const arr, const int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << "\t";
    cout << endl;
}
