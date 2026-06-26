#include <iostream>
using namespace std;

void BigDash(char num[], int now, int n, int last)
{
    if (now == n)
    {
        for (int i = 0 ; i < n ; i++)
        {
            cout << num[i];
        }
        cout << endl;
        return;
    }

    if (last == 0)
    {
        num[now] = '0';
        BigDash(num, now + 1, n, 0);

        num[now] = '1';
        BigDash(num, now + 1, n, 1);
    }
    else
    {
        num[now] = '0';
        BigDash(num, now + 1, n, 0);
    }
}

int main()
{
    int n;
    cin >> n;

    char num[21];

    if (n == 0)
    {
        return 0;
    }
    
    num[0] = '0';
    BigDash(num, 1, n, 0);

    num[0] = '1';
    BigDash(num, 1, n, 1);
}