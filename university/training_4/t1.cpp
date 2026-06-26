#include <iostream>
#include <iomanip>
using namespace std;

int first_processor , n;

double BigDash(int a , int b)
{
    double kasr = 1 , sum_kasr = 1;

    for(int i=1 ; i<b ; i++)
    {
        kasr *= ((double)a / i);
        sum_kasr += kasr;
        
        
    }

    
    return sum_kasr;
}


int main()
{
    cin >> first_processor >> n;

    cout << fixed << setprecision(3) << BigDash(first_processor, n);
}