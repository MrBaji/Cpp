#include <iostream>
using namespace std;

int BigDash(int n)
{
    if(n == 1)
        return 1;

    if(n % 2 == 0)
    {
        return 2 * BigDash(n / 2) - 1;
    }
    else
    {
        return 2 * BigDash(n / 2) + 1;
    }
}

int main()
{
    int num;

    cin >> num;

    cout << BigDash(num);
}