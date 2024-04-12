// o11e2mos.cpp : This is a solution for XI IT Olympiad task: LiteryMost.
// It mainly works on a principle that we need to move either a pair of tourists and move light with turists 1 and 2,
// or to take them separately and move light with tourist 1 only, whichever is faster.

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, time1, time2, timePair1, timePair2, result, transported;

    cin >> n;
    cin >> time1;
    if (n == 1)
        result = time1;
    else
    {
        cin >> time2;
        result = time2;
        transported = 2;
        if (n % 2 == 1)
        {
            cin >> timePair1;
            result += timePair1 + time1;
            transported++;
        }
        while (transported < n)
        {
            cin >> timePair1;
            cin >> timePair2;
            if ((timePair1 + timePair2 + 2 * time1) < (timePair2 + 2 * time2 + time1))
            {
                result += timePair1 + timePair2 + 2 * time1;
            }
            else
            {
                result += timePair2 + 2 * time2 + time1;
            }
            transported += 2;
        }
    }
    cout << result;
    return 0;
}