#include<iostream>
#include <string>
#include <Windows.h>
using namespace std;

void UpCaseRus(string& S, int size)
{
    for (int i = 0; i < size; i++)
        S[i] = (int)S[i] - 32;
}

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    for (int i = 0; i < 5; i++)
    {
        string S;
        cout << "Введите строку строчными буквами: " << endl;
        cin >> S;
        int size = S.size();

        UpCaseRus(S, size);

        cout << S << endl;
    }
    system("pause");
    return 0;
}
