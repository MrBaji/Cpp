#include <iostream>
using namespace std;

int Sum ( int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n + Sum(n - 1);
    }
}

int main()
{
    int x;

    cin >> x;

    cout << Sum(x);
}