#include <iostream>
using namespace std;

int power(int paye, int tavan)
{
    int answer = 1;

    {
        for(int i = 1 ; i <= tavan ; i++)

        answer *= paye;
    }

    return answer;
}

int factoriel(int num)
{
    if( (num == 0) || (num == 1) )
    {
        return 1;
    }
    else
    {
        return (num * factoriel(num - 1));
    }
}


int combiniton(int marja, int entekhab)
{
    return ( factoriel(marja) / (factoriel(entekhab) * factoriel(marja - entekhab)) );
}

int BigDash(int a, int x, int n)
{
    int k;
    int sum = 0;

    for( k = 0 ; k <= n ; k++)
    {
        sum += ( combiniton(n, k) * power(x, k) * power(a, n-k) );
    }

    return sum;
}

int main()
{
    int power_procsesor , D_band , end;

    cin >> power_procsesor >> D_band >> end;

    cout << BigDash(power_procsesor, D_band, end);
}