﻿#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
void DelStr(double mas[5][200], int S)
{
    if (S < 0 && S >= 5)
        return;

    if (S != 4)
    {
        for (int i = S; i < 4; i++)
            for (int j = 0; j < 200; j++)
                mas[i][j] = mas[i + 1][j];
    }

    for (int j = 0; j < 200; j++)
        mas[4][j] = 0;

}

int main()
{
    double mas[5][200];
    int n;
    int m;
    int i;
    int j;
    int s;
    //"Введите количество строк массива n="


    n = 5;

    cout << "Enter the number of columns in the array:";//"Введите количество столбцов массива m=",
    cout << " ";
    cin >> m;

    //"Введите значения элементов массива"
    cout << '\n';
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            mas[i][j] = rand() % 100;
        }
    cout << "\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << mas[i][j] << '\t';
        cout << "\n";
    }
    cout << "\n";
    cout << "Enter the deletion line number from 1 to 5:";
    cout << " ";
    int S;
    cin >> S;
    DelStr(mas, S - 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << mas[i][j] << ' ';
        cout << endl;
    }

    system("Pause");
    return 0;
}