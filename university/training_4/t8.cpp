#include <iostream>
using namespace std;

int Taghalob(int miss_score)
{
    if (miss_score == 1)
    {
        return 5;
    }
    else
    {
        return 2 * Taghalob(miss_score - 1) + 3;
    }
}

int Final_Score(int araye[], int n)
{
    int counter = 0;
    int sum = 0;
    int penalty = 0;

    for (int i = 0; i < n; i++)
    {
        if (araye[i] == 0)
        {
            counter++;
            penalty += Taghalob(counter);
        }
        else
        {
            sum += araye[i];
        }
    }

    return sum - penalty;
}

int main()
{
    int n;
    int Scores[20];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> Scores[i];
    }

    cout << Final_Score(Scores, n);
}