#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

float calculateArea(int x1, int y1, int x2, int y2, int x3, int y3)
{
    return ((0.5) * (abs((x1 * y2) - (x2 * y1) + (x2 * y3) - (x3 * y2) + (x3 * y1) - (x1 * y3))));
}

int32_t main()
{
    int n;
    cin >> n;
    float ansMax = -1;
    int maxIdx, minIdx;
    float ansMin = 1000000;
    for (int i = 1; i <= n; i++)
    {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        float ar = calculateArea(x1, y1, x2, y2, x3, y3);
        if (ar >= ansMax)
        {
            ansMax = ar;
            maxIdx = i;
        }

        if(ar<=ansMin){
            ansMin = ar;
            minIdx = i;
        }
    }

    cout<<minIdx<<" "<<maxIdx<<endl;
    fastio() return 0;
}