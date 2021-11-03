#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << "a[i] = " << a[i] << endl;
}



int Sum(int* a, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
        if (a[i] % 2 != 0)
            S += a[i];
    return S;
}

int Arif(int* a, const int size)
{
    int P = 0,n=0;
    for (int i = 0; i < size; i++)
        if (a[i] % 2 != 0)
            n++;
    P += Sum(a, size) / n;
    return P;
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 5;
    int a[n];
    int Low = -20;
    int High = 50;
    Create(a, n, Low, High);
    Print(a, n);
    cout << "S = " << Sum(a, n) << endl;
    cout << "A = " << Arif(a, n) << endl;
    return 0;
}

