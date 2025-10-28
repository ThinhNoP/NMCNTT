#include <iostream>
#include <math.h>
#define MAX 100000
#define ll long long
#define f first
#define s second

using namespace std;

void Input(int &n, int a[])
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void Solve(int &n, int a[], int &mi, int &ma)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            mi = min(mi, a[i]);
        }
        else
        {
            ma = max(ma, a[i]);
        }
    }
}

void Output(int &mi, int &ma)
{
    cout << mi << endl
         << ma;
}

int main()
{
    int n, kq1 = 10000000, kq2 = -1;
    int a[MAX];

    Input(n, a);
    Solve(n, a, kq1, kq2);
    Output(kq1, kq2);

    return 0;
}
