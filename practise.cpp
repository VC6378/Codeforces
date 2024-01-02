#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {

        // printing first pattern
        int col = n - row + 1;
        int cnt = 1;
        while (col)
        {
            cout << cnt << " ";
            cnt++;
            col--;
        }
        cnt = 1;
        
        // printing second pattern
        int star = 2 * (row - 1);
        while (star)
        {
            cout << "*"
                 << " ";
            star--;
        }

        //printing third pattern
        int num = n-row+1;
        while(num){
            cout<<num<<" ";
            num--;
        }
        cout << endl;
        row++;
    }
    return 0;
}