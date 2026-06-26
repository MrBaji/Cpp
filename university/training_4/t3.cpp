#include <iostream>
using namespace std;


int B_Dash(int arr[], int n)
{
    int current = 0 , max = 0;

    for(int j=0 ; j < n ; j++)
    {

        if( arr[j] == 1 )
        {
            current += 1 ;
        }
        else
        {
            current = 0;
        }

        if(max < current)
        {
            max = current;
        }
    }
    

    return max;
}

int main()
{
    char OneZero;
    int number[1000];
    int counter = 0;

    for(int i=0 ; cin.get(OneZero) ; i++)
    {

        if(OneZero == '\n')
        {
            break;
        }
    
        number[i] = OneZero - '0';
        
        ++counter;
    }


    cout << B_Dash(number, counter);
}