#include <bits/stdc++.h>
using namespace std;
int *MyWorkingHours(int PeakRate, int OffPeak, int xEarnings)
{
    int t = 0;
    if (PeakRate < OffPeak)
    {
        t = 1;
    }

    int a = max(PeakRate, OffPeak);
    int b = min(PeakRate, OffPeak);
    int req = xEarnings / 10;

    int x = req / a;
    if (t == 0)
    {
        if (x > 4)
            x = 4;
    }
    if (t == 1)
    {
        if (x > 20)
        {
            x = 20;
        }
    }
    int thresh;
    if (t == 0)
        thresh = 20;
    if (t == 1)
        thresh = 4;
    int s = 0;

    for (int i = x; i >= 0; i--)
    {
        int cur = a * i;

        int sec = req - cur;
        
        int y = sec / b;

        if (y * b == sec && y <= thresh)
        {
            s = y;

            break;
        }
    }

    int ret[2];
    if (!t)
    {
        ret[0] = x;
        ret[1] = s;
    }

    else
    {
        ret[0] = x;
        ret[1] = s;
    }

    return ret;
}

int main()
{
    MyWorkingHours(65, 45, 2200)[0];
}