#include <iostream>
using namespace std;

int BigDash(int sum_score)
{
    if(sum_score < 0)
    {
        return 0;
    }
    else if(sum_score == 0)
    {
        return 1;
    }
    else
    {
        return BigDash(sum_score-1) + BigDash(sum_score-2) + BigDash(sum_score-5);
    }
}

int main()
{
    int n;

    cin >> n;

    cout << BigDash(n);
}